template<typename T>struct COMB
{
	int n;
	vector<T>fa,ifa;
	COMB(int n_):n(n_)
	{
		fa.resize(n+1);ifa.resize(n+1);
		fa[0]=1;
		for(int i=1;i<=n;i++)fa[i]=fa[i-1]*i;
		ifa[n]=(T)(1)/fa[n];
		for(int i=n-1;i>=0;i--)ifa[i]=ifa[i+1]*(i+1);
	}
	T comb(int n,int r)
	{
		return n<0||r<0||n<r?(T)(0):fa[n]*ifa[r]*ifa[n-r];
	}
};
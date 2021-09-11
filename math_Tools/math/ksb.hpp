std::map<int,int>ksb(std::vector<int>ns)
{
	std::map<int,int>m;
	for(auto n:ns)
	{
		for(int i=2;i*i<=n;i++)
		{
			int tmp=0;
			while(n%i==0){tmp++;n/=i;}
			if(0!=tmp)m[i]++;
			if(n==1)break;
		}
		if(1!=n)m[n]++;
	}
	return m;
}
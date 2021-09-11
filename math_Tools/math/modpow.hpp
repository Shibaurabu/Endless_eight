
long long modpow(long long a,long long b,long long mo)
{
	a%=mo;long long r=1;
	while(b){r=r*((b%2)?a:1)%mo;a=a*a%mo;b>>=1;}
	return r;
}

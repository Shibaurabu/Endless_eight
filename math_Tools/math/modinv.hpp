
long long modpow(long long a,long long b,long long mod)
{
	a%=mod;long long r=1;
	while(b){r=r*((b%2)?a:1)%mod;a=a*a%mod;b>>=1;}
	return r;
}

long long modinv(long long a,long long mod)
{
	return modpow(a,mod-2,mod);
}

LL fast_exp(int base, int exp,int MOD) {

	LL res=1;
	assert(exp>0);
	while(exp) {

		if(exp &1) res=(res*base)%MOD;
		base=(base*base)%MOD;
		exp>>=1;

	}

	return res;
}
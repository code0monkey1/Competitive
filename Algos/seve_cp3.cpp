
#include <bits/stdc++.h>

using namespace std;

 // time complexity log(loglog(n))
#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 
 #define VI vector<int>
#define VLL std::vector<LL> v;
 #define UB 10000000 //10^7

 bitset<10000001> bs;// upto 10^7

 typedef long long LL;

 LL _sieve_size;
 VLL primes ;




 void seve(LL upperbound{  
 	
 	_sieve_size=upperbound+1; 

 	bs.set(); // set all to 1

 	bs[0]=bs[1]=0;

 	for( LL i=2;i<=_sieve_size;i++){

 		if(bs[i]) for(LL j=i*i;j<= _sieve_size ; j+=i)bs[j]=0;
 		
 		primes.push_back((int)i);
 	}


 }



 int isPrime( N){
 	if(N<=_sieve_size) return bs[N];
 	int maxx=0;
 	for(int i=0;i<(int)primes.size();i++) // this excecutes if number is more than 10^7
 		if(N%primes[i]==0)maxx=primes[i]; // and this only works in the number being tested is  <= (max prime in primes vector)^2
                                          // i.e max permissible number N=10^14      
 	return maxx;
 }
 


 int main(){
 	while(1){
 		int n=11;
 		cin>>n;
 		if(n==0)return 0;
 	seve(UB); // upto 10^7
 	
 	int sum=0;

 	for(int i=0;n>=primes[i]*primes[i];i++){
 		sum+=nun/primes[i];
 	}

 	cout<<(sum&1?"Off\n":"On\n");
 }

}
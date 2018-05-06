#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define MOD 1000000007
# define INF 1000000000 //Floyd Warshall's Algo

#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;
#define PI 2*acos(0.0)


//defines   


#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 
#define sc1(a,type) type a; cin>>a;
#define sc2(a,b,type) type a,b; cin>>a>>b;
#define sc3(a, b, c,type) type a,b,c; cin>>a>>b>>c;
#define sc4(a, b, c, d,type) type a ,b,c,d; cin>>a>>b>>c>>d;
#define NL   cout<<"\n";
#define foreach(v, c) for(__typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define revforeach(v, c) for(__typeof( (c).rbegin()) v = (c).rbegin();  v != (c).rend(); ++v)
//cp3 macros----
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S)) // to get the value of the least significant on bit
#define setAll(S, n) (S = (1 << n) - 1) // sets all bits on till length n 

#define modulo(S, N) ((S) & (N - 1))   // returns S % N, where N is a power of 2
#define isPowerOfTwo(S) (S && !(S & (S - 1))) // deals with zero
#define nearestPowerOfTwo(S) ((int)pow(2.0, (int)((log((double)S) / log(2.0)) + 0.5)))
#define turnOffLastBit(S) ((S) & (S - 1))
#define turnOnLastZero(S) ((S) | (S + 1))
#define turnOffLastConsecutiveBits(S) ((S) & (S + 1))
#define turnOnLastConsecutiveZeroes(S) ((S) | (S - 1))
#define turnOnLastNbits(n) (n= ((n)^(n>>1) )) //
//----

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define RE(i,b) for(int i=0;i<int(b);i++)
#define RE1(i,b) for(int i=1;i<=int(b);i++)
#define ALL(c) c.begin(), c.end() 
#define RALL(c) c.rbegin(),c.rend()
#define MPRESENT(container, element) (container.find(element) != container.end()) //for map,set..etc (returns true/false value)
#define VPRESENT(container, element) (find(all(container),element) != container.end()) //for vectors,strings,list,deque (returns true/false value)

#define EB emplace_back
#define MP make_pair
#define PB push_back
#define PF push_front
#define INS insert
#define F first
#define S second
#define CLR clear()
#define SZ(x) ((LL)x.size())
#define DT distance 
#define TEST(t) int t; cin>>t; while(t--)
#define csb(i) __builtin_popcount(i)
#define csbll(i) __builtin_popcountll(i)
#define clz(x) __builtin_clz(x)
#define clzl(x) __builtin_clzl(x)
#define cp(x) __builtin_parity(x)
#define ADV(v,num) advance(v,num)//used for lists and other structures that use iterators,when you can't access elements randomly ( iterator moves num positions)
#define MAX_SIZE 100000000
#define MAX_SIZE_IN_FUNCTION 100001
#define V2D(rowsize,colsize,type,name) vector<vector<type>> name(rowsize,vector<type>(colsize)); 
#define DIGITS_IN(i) (ll)log10(i)+1 // gives no of digits in a number 
#define SQR(x) (x)*(x)
#define UB upper_bound
#define LB lower_bound
#define LIM 6002

//typedef
// typedef  __int128 SUPER_LL; // you cannot cin>> this, but can assign this to some cinend value( that's how you use it )
typedef string STR;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef priority_queue<int> PQI;
typedef vector<LL> VLL;
typedef vector<STR> VS;
typedef vector<char> VC;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<STR,int> PSI;
typedef pair<int,STR> PIS; 
typedef vector<PII> VII;
typedef map<int,int> MII;
typedef map<LL,LL> MLL;
typedef map<STR,int> MSI;
typedef map<char,int> MCI;
typedef map<int,STR> MIS;
typedef set<STR> SS;
typedef set<int> SI;
typedef set<LL> SLL;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
template <class T> T gcd (T a, T b) { T r; while (b) { r = a % b; a = b; b = r; } return a; }
template <class T> T lcm (T a, T b) { return a / gcd (a, b) * b; }


//-- code for suing SUPER_LL (128 bit int)  or 10^40--
std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
	std::ostream::sentry s( dest );
	if ( s ) {
		__uint128_t tmp = value < 0 ? -value : value;
		char buffer[ 128 ];
		char* d = std::end( buffer );
		do
		{
			-- d;
			*d = "0123456789"[ tmp % 10 ];
			tmp /= 10;
		} while ( tmp != 0 );
		if ( value < 0 ) {
			-- d;
			*d = '-';
		}
		int len = std::end( buffer ) - d;
		if ( dest.rdbuf()->sputn( d, len ) != len ) {
			dest.setstate( std::ios_base::badbit );
		}
	}
	return dest;
}
//-- end of code for using 128 bit int --
LL fast_exp(int base, int exp,int mod) {

	LL res=1;

	

	while(exp) {

		if(exp &1) res=(res*base)%mod;
		base=(base*base)%mod;
		exp>>=1;

	}

	return res;
}
// inline LL lcm(LL a,LL b){ return (a*b)/__gcd(a,b);}
inline LL myLogint (LL x) {return 64 - __builtin_clzl(x) - 1;}



#ifndef ONLINE_JUDGE
    #include "debug.h"
 #else
    #define debug(args...)                 
 #endif

// int binary(VI & v ,int num){

// 	int s=1;
// 	int e=SZ(v);
// 	int index=-1;
// 	debug(v, "to find ",num);
// 	while(s<=e){

// 		int mid=(s+e)/2;
// 		//debug("start is ", s," end is ",e," mid is ",mid," num is ", num);
// 		debug(s,e,"the elements are ",v[s],v[e]);
// 		if(v[mid]<=num)s=mid+1;
// 		else 	e=mid-1;
// 		debug(s,e,"the elements are ",v[s],v[e]);
// 	}

// 	return s;
// }


// int ternary_search(int l,int r, int x)
// {
// 	if(r>=l)
// 	{
// 		int mid1 = l + (r-l)/3;
// 		int mid2 = r -  (r-l)/3;
// 		if(ar[mid1] == x)
// 			return mid1;
// 		if(ar[mid2] == x)
// 			return mid2;
// 		if(x<ar[mid1])
// 			return ternary_search(l,mid1-1,x);
// 		else if(x>ar[mid2])
// 			return ternary_search(mid2+1,r,x);
// 		else
// 			return ternary_search(mid1+1,mid2-1,x);

// 	}
// 	return r;
// }



int main(){fastio
	#ifndef ONLINE_JUDGE
	FILE_IO
	#endif  


	int num=12;

	VI v={5,6,1,2,3,4};

	int low=0;
	int high=SZ(v)-1;

	while(low<high){

		int mid=(high+low)>>1;

		if(v[high]-v[low]>1){
           
		}
	}


	return 0;
}



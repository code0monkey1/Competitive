#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define MOD 1000000007
# define INF (1 < <29)

#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;



//defines   


#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 
#define sc1(a,type) type a; cin>>a;
#define sc2(a,b,type) type a,b; cin>>a>>b;
#define sc3(a, b, c,type) type a,b,c; cin>>a>>b>>c;
#define sc4(a, b, c, d,type) type a ,b,c,d; cin>>a>>b>>c>>d;
#define nl    cout<<"\n";
#define foreach(v, c) for(__typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define revforeach(v, c) for(__typeof( (c).rbegin()) v = (c).rbegin();  v != (c).rend(); ++v)

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define re(i,b) for(int i=0;i<int(b);i++)
#define re1(i,b) for(int i=1;i<=int(b);i++)
#define all(c) c.begin(), c.end() 
#define rall(c) c.rbegin(),c.rend()
#define mpresent(container, element) (container.find(element) != container.end()) //for map,set..etc (returns true/false value)
#define vpresent(container, element) (find(all(container),element) != container.end()) //for vectors,strings,list,deque (returns true/false value)

#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define ins insert
#define F first
#define S second
#define clr clear()
#define sz(x) ((int)x.size())
#define dt distance 
#define test(t) int t; cin>>t; while(t--)
#define csb(i) __builtin_popcount(i)
#define csbll(i) __builtin_popcountll(i)
#define clz(x) __builtin_clz(x)
#define clzl(x) __builtin_clzl(x)
#define cp(x) __builtin_parity(x)
#define adv(v,num) advance(v,num)//used for lists and other structures that use iterators,when you can't access elements randomly ( iterator moves num positions)
#define mod 1000000007
#define MAX_ARR 1000000
#define v2d(rowsize,colsize,type,name) vector<vector<type>> name(rowsize,vector<type>(colsize)); 
#define digits_in(i) (ll)log10(i)+1 // gives no of digits in a number 
#define sqr(x) (x)*(x)



//typedef
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<str> vs;
typedef vector<char> vc;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<str,int> psi;
typedef pair<int,str> pis; 
typedef vector<pii> vii;
typedef map<int,int> mii;
typedef map<ll,ll> mll;
typedef map<str,int> msi;
typedef map<char,int> mci;
typedef map<int,str> mis;
typedef unordered_map<int,int> umii;
typedef unordered_map<str,int> umsi;
typedef unordered_map<int,str> umis;
typedef unordered_map<str,str> umss;
typedef unordered_map<char,int> umci;
typedef set<str> ss;
typedef set<int> si;
typedef unordered_set<str> uss;
typedef unordered_set<int> usi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


#ifndef ONLINE_JUDGE
    #include "debug.h"
 #else
    #define debug(args...)                 
 #endif

int N;         // using global variables in contests can be a good strategy


int main() {
	cin>>N;
	string s;getline(cin,s);
	while (N--) {          
          // we simply loop from N, N-1, N-2, ..., 0
		getline(cin,s);
		cout<<s;
		nl;

	}
 } // return 0;

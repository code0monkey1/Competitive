/*input
2
aabb
abccba
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define MOD 1000000007
#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;



//defines   
#define sc1(d) scanf("%d", &d);
#define sc2(a, b) scanf("%d %d", &a, &b);
#define sc3(a, b, c) scanf("%d %d %d", &a, &b, &c);
#define sc4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d);

#define dsc1(d) int d; scanf("%d", &d);
#define dsc2(a, b) int a,b; scanf("%d %d", &a, &b);
#define dsc3(a, b, c) int a,b,c; scanf("%d %d %d", &a, &b, &c);
#define dsc4(a, b, c, d) int a ,b,c,d; scanf("%d %d %d %d", &a, &b, &c, &d);

#define scl1(d) scanf("%lld", &d);
#define scl2(a, b) scanf("%lld %lld", &a, &b);
#define scl3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c);
#define scl4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

#define dscl1(d) ll d; scanf("%lld", &d);
#define dscl2(a, b) ll a,b; scanf("%lld %lld", &a, &b);
#define dscl3(a, b, c) ll a,b,c; scanf("%lld %lld %lld", &a, &b, &c);
#define dscl4(a, b, c, d) ll a,b,c,d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);



#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define all(c) c.begin(), c.end() 
#define apresent(container, element) (container.find(element) != container.end()) //for map,set..etc
#define spresent(container, element) (find(all(container),element) != container.end()) //for vectors,strings,list,deque

#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define ins insert
#define clr clear()
#define sqr(x) ((x)*(x))
#define sz(x) ((int)x.size())
#define dt distance 
#define test(t) int t; cin>>t; while(t--)
#define csb(i) __builtin_popcount(i)
#define csbll(i) __builtin_popcountll(i)
#define M 32

using namespace std;
using namespace __gnu_pbds;

//typedef
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<str> vs;
typedef pair<int,int> pii;
typedef pair<str,int> psi;
typedef pair<int,str> pis; 
typedef vector<pii> vii;
typedef map<int,int> mii;
typedef map<str,int> msi;
typedef map<int,str> mis;
typedef unordered_map<int,int> umii;
typedef unordered_map<str,int> umsi;
typedef unordered_map<int,str> umis;
typedef set<str> ss;
typedef set<int> si;
typedef unordered_set<str> uss;
typedef unordered_set<int> usi;


#define DEBUG 

#ifdef DEBUG

    #define debug(args...)	cout << "Line No = " <<  __LINE__ << " >\t"; (Debugger()) , args

class Debugger
{
public:
	Debugger(const std::string& _separator = ", ") :
	first(true), separator(_separator){}

        template<typename ObjectType>
	Debugger& operator , (const ObjectType& v)
	{
		if(!first)
			std::cout << separator;
		std::cout << v;
		first = false;
		return *this;
	}
	~Debugger() {  std::cout << endl;}

private:
	bool first;
	std::string separator;
};

    template <typename T1, typename T2>
inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
{
	return os << "(" << p.first << ", " << p.second << ")";
}

    template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v)
{
	bool first = true;
	os << "[";
	for(unsigned int i = 0; i < v.size(); i++)
	{
		if(!first)
			os << ", ";
		os << v[i];
		first = false;
	}
	return os << "]";
}

    template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::set<T>& v)
{
	bool first = true;
	os << "[";
	for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
	{
		if(!first)
			os << ", ";
		os << *ii;
		first = false;
	}
	return os << "]";
}

    template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v)
{
	bool first = true;
	os << "[";
	for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
	{
		if(!first)
			os << ", ";
		os << *ii ;
		first = false;
	}
	return os << "]";
}
template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::deque<T>& v)
{
	bool first = true;
	os << "[";
	for (auto s: v)
	{
		if(!first)
			os << ", ";
		os << s;
		first = false;
	}
	return os << "]";
}
template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::list<T>& v)
{
	bool first = true;
	os << "[";
	for (auto s: v)
	{
		if(!first)
			os << ", ";
		os << s;
		first = false;
	}
	return os << "]";
}

#else
    #define debug(args...)                  // Just strip off all debug tokens
#endif



/*   FILE IO 
     freopen("in.txt","r",stdin);        //to be put inside
     freopen("out.txt","w",stdout);      //main , when  used 
 */

     using namespace std;

     int ct=0;
void solve(string s ) {//char str[], int n
	
	for(int len = 1; len<=s.size(); len++) { //len <= n
		
		for(int i = 0; i+len <= s.size() ; i++) {//n
			
			int j = i + len - 1;
			string temp="";
			int t=0;
			for(int k = i; k <= j; k++){
			    temp+=s[k];//str[k] 
			    t^=s[k];
			}
			
			
			t?ct:ct++;
		}
	}

	cout<<ct<<"\n";
	ct=0;
}

int main() {


	test(t){


		str s;
		cin>>s;
		solve(s);

	}


	return 0;
}

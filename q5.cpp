/*input
3
10
20
30
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

#define scll1(d) scanf("%lld", &d);
#define scll2(a, b) scanf("%lld %lld", &a, &b);
#define scll3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c);
#define scll4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

#define dscll1(d) ll d; scanf("%lld", &d);
#define dscll2(a, b) ll a,b; scanf("%lld %lld", &a, &b);
#define dscll3(a, b, c) ll a,b,c; scanf("%lld %lld %lld", &a, &b, &c);
#define dscll4(a, b, c, d) ll a,b,c,d; scanf("%lld %lld %lld %lld", &a, &b, &c, &d);



#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re(i,b) for(int i=0;i<int(b);i++)
#define all(c) c.begin(), c.end() 
#define apresent(container, element) (container.find(element) != container.end()) //for map,set..etc (returns true/false value)
#define spresent(container, element) (find(all(container),element) != container.end()) //for vectors,strings,list,deque (returns true/false value)

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
#define test(t) int t; scanf("%d",&t); while(t--)
#define csb(i) __builtin_popcount(i)
#define csbll(i) __builtin_popcountll(i)
#define digits(i) (int)log10(i)+1 // does not apply for i==0 , add an excetion contition for n==0 ( just return count 1 for that inseted of using this function)
#define M 32
#define mod 1000000007
#define tdv(rowsize,colsize,type,name) vector<vector<type>>  name(rowsize,vector<type>(colsize));
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
typedef map<char,int> mci;
typedef map<int,str> mis;
typedef unordered_map<int,int> umii;
typedef unordered_map<str,int> umsi;
typedef unordered_map<int,str> umis;
typedef unordered_map<char,int> umci;
typedef set<str> ss;
typedef set<int> si;
typedef unordered_set<str> uss;
typedef unordered_set<int> usi;


// #define DEBUG 

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



#include <bits/stdc++.h>


using namespace std;


int main(){

	int n;
	cin>>n;


	vi v(n);

	re(i,n)cin>>v[i];

	int sum=0;
	sum=accumulate(all(v),sum);

	sort(all(v));
	int result=sum;
	int index=0;
	int maxi=0;
	while(index<n){

		
		maxi=max(maxi,result%10?result:result/10);
		

		result-=v[index];

		index++;
	}

	cout<<maxi;

	return 0;

}





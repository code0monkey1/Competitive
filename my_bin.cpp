/*input
3 6
3 2
3 2
2 1
1 3
2 1
2 1
2
2 1
1 2
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
#define cint1(d) scanf("%d", &d)
#define cint2(a, b) scanf("%d %d", &a, &b)
#define cint3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define cint4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)

#define clong1(d) scanf("%lld", &d)
#define clong2(a, b) scanf("%lld %lld", &a, &b)
#define clong3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define clong4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)


#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep(i,a,b) for(int i=int(a);i<int(b);i++)
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
     my_bin( vi & vec,int num ){

     	int high=vec.size();
     	int low=0;

     	int mid=(high+low)/2;

     	do{

     		if(num==vec[mid]){
     			cout<<"element "<<num<<" found at index "<<mid;
     			break;
     		}
     		else if(num>vec[mid]){
     			low=mid+1;
     			high=vec.size()-1;
     		}
     		else{
     			low=0;
     			high=mid-1;
     		}
     		mid=(low+high)/2;

     	}while(low<=high);

     }
     void iterative_binary_search(vector<int>& v,int num){
     	int start=0;
     	int end=v.size()-1;

     	while(start<=end){

   int mid=(start+end)/2; //or [low + (high-low)/2] to avoid int overflow
   if(v[mid]==num){
   	cout<<mid;
   	return;
   }
   else if(v[mid]>num)end=mid-1;
   else start=mid+1;

}
cout<<"did not find"<<"\n";
}
int first=-1;
int last=-1;

void count_bin(vi & v,int low,int high,int n,int left_most){

	int mid=(low+high)/2;

	if(low>high)return;
	
	if(n==v[mid]){
		
		if(left_most){
			first=mid;
			count_bin(v,low,mid-1,n,left_most);
			
		}
		else{
			last=mid;
			count_bin(v,mid+1,high,n,left_most);
			
		}
	}
	else if(n>v[mid])count_bin(v,mid+1,high,n,left_most);
	else count_bin(v,low,mid-1,n,left_most);
}

int main() {

	vi v={1,3,3,3,3,5,5,6,8,9,32,32,32,56,78};

	int n=6;

	count_bin(v,0,v.size()-1,n,1);
	count_bin(v,0,v.size()-1,n,0);
	if(first!=-1 && last!=-1){
		cout<<first-last+1;
	}
	else{cout<<"not found";}
	return 0;
}

/*input
2
3 2 3
1 2
2 3
5 4 1
1 1
2 4
3 5
2 3
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define MOD 1000000007

#define MODSET(d) if ((d) >= MOD) d %= MOD;
#define MODNEGSET(d) if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
#define MODADDSET(d) if ((d) >= MOD) d -= MOD;
#define MODADDWHILESET(d) while ((d) >= MOD) d -= MOD;



//defines   

#define dsc1(a,type) type a; cin>>a;
#define dsc2(a,b,type) type a,b; cin>>a>>b;
#define dsc3(a, b, c,type) type a,b,c; cin>>a>>b>>c;
#define dsc4(a, b, c, d,type) type a ,b,c,d; cin>>a>>b>>c>>d;
#define nl    cout<<"\n";
#define foreach(v, c) for(__typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define revforeach(v, c) for(__typeof( (c).rbegin()) v = (c).rbegin();  v != (c).rend(); ++v)

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);
#define re(i,b) for(int i=0;i<int(b);i++)
#define re1(i,b) for(int i=1;i<=int(b);i++)
#define all(c) c.begin(), c.end() 
#define mpresent(container, element) (container.find(element) != container.end()) //for map,set..etc (returns true/false value)
#define vpresent(container, element) (find(all(container),element) != container.end()) //for vectors,strings,list,deque (returns true/false value)

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
// __builtin_clz(x);
#define M 32
#define mod 1000000007
#define max_arr 100000000
#define v2d(rowsize,colsize,type,name) vector<vector<type>> name(rowsize,vector<type>(colsize)); 
#define digits_in(i) (ll)log10(i)+1 // gives no of digits in a number 
//does not apply for i==0 , add an excetion contition for n==0 ( cust return count 1 for that inseted of using this function)


//typedef
typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<str> vs;
typedef vector<char> vc;
typedef pair<int,int> pii;
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
     freopen("out.txt","w",stdout);      //main , when  used today

 */
     int A[100000001];

     int _mergeSort(int arr[], int temp[], int left, int right);
     int merge(int arr[], int temp[], int left, int mid, int right);

/* This function sorts the input array and returns the
number of inversions in the array */
     int mergeSort(int arr[], int array_size)
     {
     	int *temp = (int *)malloc(sizeof(int)*array_size);
     	return _mergeSort(arr, temp, 0, array_size - 1);
     }

/* An auxiliary recursive function that sorts the input array and
returns the number of inversions in the array. */
     int _mergeSort(int arr[], int temp[], int left, int right)
     {
     	int mid, inv_count = 0;
     	if (right > left)
     	{
	/* Divide the array into two parts and call _mergeSortAndCountInv()
	for each of the parts */
     		mid = (right + left)/2;

	/* Inversion count will be sum of inversions in left-part, right-part
	and number of inversions in merging */
     		inv_count = _mergeSort(arr, temp, left, mid);
     		inv_count += _mergeSort(arr, temp, mid+1, right);

	/*Merge the two parts*/
     		inv_count += merge(arr, temp, left, mid+1, right);
     	}
     	return inv_count;
     }

/* This funt merges two sorted arrays and returns inversion count in
the arrays.*/
     int merge(int arr[], int temp[], int left, int mid, int right)
     {
     	int i, j, k;
     	int inv_count = 0;

i = left; /* i is index for left subarray*/
j = mid; /* j is index for right subarray*/
k = left; /* k is index for resultant merged subarray*/
     	while ((i <= mid - 1) && (j <= right))
     	{
     		if (arr[i] <= arr[j])
     		{
     			temp[k++] = arr[i++];
     		}
     		else
     		{
     			temp[k++] = arr[j++];

	/*this is tricky -- see above explanation/diagram for merge()*/
     			inv_count = inv_count + (mid - i);
     		}
     	}

/* Copy the remaining elements of left subarray
(if there are any) to temp*/
     	while (i <= mid - 1)
     		temp[k++] = arr[i++];

/* Copy the remaining elements of right subarray
(if there are any) to temp*/
     	while (j <= right)
     		temp[k++] = arr[j++];

/*Copy back the merged elements to original array*/
     	for (i=left; i <= right; i++)
     		arr[i] = temp[i];

     	return inv_count;
     }

/* Driver program to test above functions */
    
     using namespace std;


     int main() {

     	test(t){
     		int aux[100001]={0};
     		int ships,increments,value;

     		cin>>ships>>increments>>value;

     		while(increments--){
     			int lhs,rhs;
     			cin>>lhs>>rhs;
     			aux[lhs]+=value;
     			aux[rhs+1]=-value;
     		}

     		ll val=0;
     		for(int i=1;i<=ships;i++){
     			val+=aux[i];
     			aux[i]=val;
     			A[i-1]=aux[i];
     			// cout<<aux[i]<<" ";
     		}
     			// for(int i=0;i<ships;i++)cout<<A[i]<<" ";
     		cout<<mergeSort(A,ships);

     		nl;
     	}
     	return 0;
     }
/*input
2
40 50
*/
#include <bits/stdc++.h>

using namespace std;

//defines   

#define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair
#define FF first
#define SS second

//typedef

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */
     

     int main(){
     	int fr=INT_MIN;
     	int num=INT_MIN;
     	map<int,int> um;
     	int t;
     	cin>>t;
     	while(t--){
     		

     		int temp;
     		cin>>temp;
     		int sum=0;
     		string s=to_string(temp);

     		re(i,0,s.size()){
     			sum+=(s[i]-'0');
     		}
     		
     		um[(temp^sum)]++;

     		

     		for(const  pair<int,int> & it:um){
     			if(it.second>fr || (it.second==fr && it.first>num)){
     				num=it.first;
     				fr=it.second;
     			}
     		}
     		
     	}

     	cout<<num<<" "<<fr-1;  

     	return 0;   
     }



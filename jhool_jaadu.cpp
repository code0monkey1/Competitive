/*input
2
hackerearth
hacker
hackerearth
wow
*/

#include<bits/stdc++.h>

using namespace std;

//defines   
 #define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define vii vector< vi >
#define vi vector<int>
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */


     int main(){

     	int t;
     	cin>>t;
     	while(t--){
     		unordered_map<char,int> jhool;
     		string s;
     		cin>>s;
     		re(i,0,s.size())jhool[s[i]]++;

     		int has=0;
     		string j;
     		cin>>j;
           
            re(i,0,j.size()){
            	if(present(jhool,j[i])){
            		has=1;
            		break;
            	}
            }
     		has?cout<<"YES\n":cout<<"NO\n";

     	}
     	return 0;   
     }



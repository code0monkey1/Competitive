/*input
1
oomar
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

     string ar[]={"All","work","and","no","play","makes","for","no","work","no","fun","and","no","results"};
     int main(){

     	unordered_map<string , int > mp;

     	int min_diff=INT_MAX;
     	string s="";

     	int i=0;
     	while(i<14){

     		if(mp.find(ar[i])!=mp.end()){

     			if(i-mp[ar[i]]<min_diff){
     				min_diff=i-mp[ar[i]];
     				s=ar[i];		
     			}
     			
     		} 
     		mp[ar[i]]=i;
     		//cout<<"debugging "<<ar[i]<<" "<<mp[ar[i]]<<"\n";
     		i++;
     	}
     	cout<<s<<" "<<min_diff;





     	return 0;   
     }



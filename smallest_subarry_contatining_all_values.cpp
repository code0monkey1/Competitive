/*input
1
oomar
*/

#include<bits/stdc++.h>

using namespace std;

//defines   
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
     int max_i=INT_MIN;
     int min_i=INT_MAX;

     int main(){

     	vector<string> arr={"My","paramount","object", "in","this","struggle", "is" , "to","save", "the","Union","and","if","I","could","save","the","Union"};

     	map<string ,int > mp;

     	mp["save"]=0;
     	mp["Union"]=0;

     	int sz=mp.size();
     	for(int i=0;i<arr.size();i++){
     		if(mp[arr[i]]==0){
     			mp[arr[i]]=i+1;

     			sz--;
     			if(sz<=0){
     				max_i=max(i+1,max_i){
     				min_i=min(i+1,min_i)
     				}
     			}
     		}
     	}



     	return 0;   
     }



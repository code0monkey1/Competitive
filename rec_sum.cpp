/*input
5
1 vasya
2 petya
3 kolya
4 limak
5 illya
2
1
2
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
#define MAX 409
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */
     vector<pair<int,string> >  lookup[MAX];


     int hash_function(int n){
     	return n%MAX;
     }

     string search_hash(int roll){

     	int key=hash_function(roll);

     	for(int i=0;i<lookup[key].size();i++){
     		if(lookup[key][i].first==roll){
     			return lookup[key][i].second;
     		}
     	}
     	cout<<"not found";
     	return"";
     }

     int insert_hash(int roll,string name){

     	int key= hash_function(roll);
     	lookup[key].push_back(make_pair(roll,name));
     }

     int main(){

     	
     	int n;
     	cin>>n;

     	while(n--){

     		int roll;
     		string name;
     		cin>>roll>>name;

     		insert_hash(roll,name);

     	}

     	int q;
     	cin>>q;

     	while(q--){

     		int roll;
     		cin>>roll;
     		cout<<search_hash(roll)<<"\n";

     	}




     	return 0;   
     }



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

  	
  	 int n;
  	 cin>>n;

  	 std::vector<string> v(n);

  	 for(int i=0;i<n;i++)cin>>v[i];

    // for(int i=0;i<n;i++)cout<<v[i];


  	 	
  	 	vector<int> aux(n,0);

  	  for(int i=0;i<n;i++){
	  	  	 for(int j=i+1;j<n;j++){
 					
 					if(v[i]<v[j])aux[j]++;
	  	  	 } 
  	  }

  	  for(int i=0;i<n;i++)cout<<aux[i]<<"\n";

  
return 0;   
}


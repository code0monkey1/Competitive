#include<bits/stdc++.h>

 using namespace std;

//defines   
 #define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N cout<<"\n" //do not use endl ( it  will reduce speed )
#define ll long long
#define vii vector< vector<int> >
#define vi vector<int>
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define ret(i,a,b) for(size_t i(a);i<int(b);i++)
#define container(type,name) for(container<type>::iterator it=name.begin();it!=name.end();it++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */
 void insertion_sort( vector<int> & vec ){
      
	  
	   for(int i=1;i<vec.size();i++){
	   	  
	   	   int element=vec[i];
	   	   int position=i;
				   
				   while(position>0 && vec[position-1]>element){
				   	   	
				   	   	vec[position]=vec[position-1];
				   	   	position--;
				   	   }
				   	   
	   	 vec[position]=element;
	   	 
	 
	   }
	 
}

int main(){
 
int t; cin>>t;
vector<int> vec;

int temp;
while(t--){
	
	cin>>temp;
	vec.pb(temp);
	
}
vector<int> vc(vec);
insertion_sort(vec);

for(int i=0;i<vc.size();i++){

	 for(int j=0;j<vc.size();j++) if(vc[i]==vec[j])cout<<j+1<<" ";
}
return 0;   
	

}

#include<bits/stdc++.h>

 using namespace std;

//defines   
 #define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N cout<<"\n" //do not use endl ( it  will reduce speed )
#define ll long long
#define vii vector<vi >
#define vi vector<int>
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define ret(i,a,b) for(size_t i(a);i<int(b);i++)
#define container(type,name) for(container<type>::iterator it=name.begin();it!=name.end();it++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair

   /*FILE IO (to be pasted inside the  main function)

   freopen("inputf.in","r",stdin);
    freopen("outputf.in","w",stdout);
 */  

bool my_fuc(const pair<int,int>  & p1,const pair<int,int>  & p2){

 	 		return p1.first<p2.first ;
 }
int main(){
 	 
 	  int n, m;
 	  cin>>n>>m;
       std::vector< pair<int ,int> > v;
 	  for(int i=0;i<n;i++){
           int temp; cin>>temp;
        v.push_back(mp(temp%m,temp));
 	  }
   sort(v.begin(), v.end() ,my_fuc);
   
   for(auto t: v){
   	cout<<t.second<<" ";
   }

return 0;
}
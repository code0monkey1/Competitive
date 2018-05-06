#include<bits/stdc++.h>

 using namespace std;

//defines   
#define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define vii vector< vi >
#define vi vector<int>
#define pb push_back
#define mp make_pair
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */
 bool cstm(pair<int,int> & a, pair<int,int> & b){

 	return (a.second==b.first);
 }
int main(){
 


  int t;cin>>t;

  while(t--){

   int cases,diff;
   cin>>cases>>diff;
         std::vector<pair<int,int> > v;
	    while(cases--){
           
	           int a,b;
	           cin>>a>>b;
	           v.pb(mp(a,b));

	    }

	    sort(v.begin(), v.end(),cstm);
	   // for(auto t:v)cout<<t.first<<" "<<t.second<<" ";
         //    cout<<endl;
            int flag=1;
          for(int i=0;i<v.size();i++){
              
               int x1=v[i].first;
                int in=0;
                   while(i+1<v.size() && v[i].second==v[i+1].first){
                       in=1;
                            if(v[i+1].second-x1==diff){
                              cout<<"Yes\n";
                              flag=0;
                              break;
                            }
                            else{
                              i++;
                            }

                   }
             if(in)i--;
            }

    if(flag)cout<<"No\n";

  }
   
return 0;   
	

}
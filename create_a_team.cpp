#include <bits/stdc++.h>

using namespace std;



int main(){
 ios_base::sync_with_stdio(false);cin.tie(NULL);
     int t;
     cin>>t;

     while(t--){

     	 int n;cin>>n;
     	 int r; cin>>r;
          std::vector<int >v(n);
     	 for(int i=0;i<n;i++)cin>>v[i];
             r=n-(n%r);
             	rotate(v.begin(),v.begin()+r-1,v.end());
             
            	 for(int i=0;i<n;i++)cout<<v[i]<<" ";
     }

	 return 0;
}
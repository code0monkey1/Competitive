
#include <bits/stdc++.h>

#define pb push_back
using namespace std;

int main(){
     
      string s;
      cin>>s;
       int num;
       cin>>num;
  std::vector<string> v;
       while(s.length()){
         v.pb(s);
         s=s.substr(1);

       }

       sort(v.begin(),v.end());
       for(auto i: v)cout<<i<<" ";

	return 0;
}
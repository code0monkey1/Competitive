#include <bits/stdc++.h>

using namespace std;
int main(){
	int t;

	cin>>t;
	while(t--){

      int size,cows;
      cin>>size>>cows;
      vector<int> v(size);
       int t2=size;
      while(t2--){
          int temp;cin>>temp;
          v.push_back(temp);
      }
      sort(v.begin(), v.end());
        
      for(int i=0;i<v.length();i++){
          int j=i+1;
          int gap=v[j]-v[i];
          int count=1;
        for(;j<v.length()-1;j++){
           
          
        }

      }

	}
return 0;
}

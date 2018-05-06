#include <bits/stdc++.h>

using namespace std;
int main(){
    
    std::vector<int > v={4,6,42,7,78};

    int s=INT_MAX;
    int s2=INT_MAX;
   
    for(int i=0;i<v.size();i++){
          bool swch=0;
          int temp;
    	 if(s>v[i]){
    	 	temp=s;
    	 	s=v[i];
    	  swch=1;
    	  s2=temp;
    	}
    	else if(s2>v[i] && v[i]>s)s2=v[i];
    }
    cout<<s2;
}
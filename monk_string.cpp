#include <bits/stdc++.h>

 using namespace std;
  int counting=0;
int main(){
  
     string s;
     cin>>s;

     for(int i=0;i<s.length();i++){
         int temp=0;
         bool in=0;
        while(i<s.length() && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ){
               temp++;
               i++;
               in=true;
         	}
     		counting=max(counting,temp);
    
     	}

     	cout<<counting;
	
return 0;   

}
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 100010

 // T = text, P = pattern
int b[MAX_N]={0}; // b = back table
string T="";
string P="";
int num=0;
int mini=0;

void calcuArray(){
    int j=0;
    int i=1;
   while(i<P.length()){
  
   if(P[i]==P[j]){
  
    b[i]=j+1;i++;j++;

   }
   else if(j>0) j=b[j-1];

   else{
    b[i]=j;i++;

   }
   }

}
bool myKmp (){
  bool flag;
   int i=0;int j=0;

   while(i<T.length()){

    if(T[i]==P[j]){
   
      i++;j++;
       if(j==P.length()){
        cout<<P<<endl;
        flag=true;
    }
    else if(j>0)j=b[j-1];
    
    else{
     j=0;
     i++;
    }

}
} return flag;
   }
int main() {
     int t; cin>>t;
      
     while(t--){
        string s;int index;
       cin>>s;cin>>index;
       
   
        int it=0;
        int temp=0;
    for(int i=0;i<s.length();i++){
    if(i!=s.find_last_of(""+s[i])) {
      P+=s[i];
      it=i;
    }
    else break;
     }
     if(it>0){
      
        T=s.substr(0,it);
      P=s.substr(1,index-1);
      calcuArray();
      
      if(!myKmp())cout<<"Puchi is a cheat!"<<endl;;
      
     }
     else cout<<"Puchi is a cheat!"<<endl;
     
     }
     
    return 0;
}

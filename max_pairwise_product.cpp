#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  while(cin>>n,n){
  
  queue <int> b;
  stack <int> e;
  stack <int> d;
   int trucks=n;
   for(int i;n--;){
   cin>>i;
   b.push(i);
  }
    int success=1;
    while(b.size() ||( (b.size()==0) && e.size()!=trucks)){

     while(e.empty() && b.front()!=1){
        d.push(b.front());
          b.pop();
        }
       if(e.empty() && b.front()==1 ){
        e.push(b.front());
        b.pop();
         }
      else if(d.empty()){
          if(b.front()-e.top()==1){
            e.push(b.front());
            b.pop();
          }
          else {
            d.push(b.front());
            b.pop();
          }
          
        }
      else if(b.empty()){

           if(d.top()-e.top()==1){
            e.push(d.top());
            d.pop();
          }
          else{
            success=0;
            cout<<"no\n";
            break;
              }
      }
      else if(b.front()-e.top()==1){
           e.push(b.front());
           b.pop();
      }
      else if(d.top()-e.top()==1){
            e.push(d.top());
            d.pop();
      }
      else if(d.top()-b.front()==1 ||  !(b.empty() || d.empty() || e.empty() ) ){
          d.push(b.front());
          b.pop();
   }
       else{
        success=0;
        cout<<"no\n";
        break;
       }
  }
   if(success)cout<<"yes\n";
  }

 return 0; 
} 

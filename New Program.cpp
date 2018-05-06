//includes
#include <bits/stdc++.h>

using namespace std;

//defines
 #define all(c) c.begin(), c.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N cout<<"\n" //do not use endl ( it  will reduce speed )
#define O cout<<
#define I cin>>
#define test cout<<"--------------testing -------------\n";
#define ll long long
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
#define MAX_N 100010

 // T = text, P = pattern
int b[MAX_N]={0}; // b = back table
string T="biggerdiagram";
string P="digger";
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
void myKmp (){

   int i=0;int j=0;

   while(i<T.length()){

    if(T[i]==P[j]){
   
      i++;j++;
       if(j==P.length())O i<<" ";
    }
    else if(j>0)	j=b[j-1];
    
    else{
     j=0;
     i++;
    }

}
   }


/*
     int calcGcd(int b, int a){
     	return b=0? a:calcGcd(a%b,b);
     }
     
     int gcdIterative(int a,int b){
    
       int larger=a>b?a:b;
       int smaller=a>b?b:a;
       while(smaller!=0){
        int remiander=larger%smaller;
          larger=smaller;
           smaller=remiander;
       }
           return larger; 
     }

     void replaceit(string & s, string toReplace, string replaceWith){
   
   
      re(i,0,s.length()||s.find(toReplace)<0){

         int index=s.find(toReplace);

       
      }


*/

int main() {
O "this is the first program";
 
  return 0;
}



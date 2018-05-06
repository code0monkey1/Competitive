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
string T="my names is ch chiranchijeev thomas";
string P="WpfKIyTneonjuPPUEDHOiABFwNAphqjLwXDTCRklqtVnRCPQDpdW";
int num=0;
int mini=0;
int counting=0;

void calcuArray(){
    int j=0;
    int i=1;
   while(i<P.size()){
  
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

   while(i<T.size()){

    if(T[i]==P[j]){
      i++;j++;
       if(j==P.size()){
        O i<<" ";
        j=0;
    }
    else if(j>0)j=b[j-1];
    else i++;
}
   }
 }


/*
5

abcdefghijk
abcdabcd
abababababababbababababab
amanamanamanaman
bbabb
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
   
   
      re(i,0,s.size()||s.find(toReplace)<0){

         int index=s.find(toReplace);

       
      }


*/
char needle[100010];
char haystack[100010];
int arr[100010]={0};

void KMPpreprocessor(){
 
  int i=1; int j=0;

  while(i<P.size()){

    if(P[i]==P[j]){
       arr[i]=j+1;
       i++;j++;
    }
    else if(j==0){
     arr[i]=0;
      i++;
    }
    else j=arr[j-1];
    
    }
//re(i,0,P.size())cout<<arr[i]<<" ";

  }

void myKmpSearch(){
 
 int i=0;
 int j=0;

while(i<T.size()){
 
  if(T[i]==P[j]){
    i++;j++;
    if(j==P.size()){
    cout<<i-j;N;
   j=0;
    }
  }
  else if(j>0) j=arr[j-1];
  else i++;
}

}


int main() {
  
  int t;
  cin>>t;
  while(t--){
    cin>>P;
   if(P.size()<=1){
     cout<<P.size();N;if(t!=0)N;
   }
   else if(P.size()==2){
    if(P[0]==P[1]){cout<<1;N;}
    else {cout<<2;N;}
      if(t!=0)N;
   }
   else if(P.size()==3){
  KMPpreprocessor();
    int halfLength=1;
 
   bool flag=true;

   for(int i=halfLength;i<P.size()-1;i++){

      if(arr[i]>arr[i+1]){
        flag=false;
        break;
      }
   }
   if(flag){cout<<P.size()-arr[P.size()-1];N;}
   else{ cout<<P.size();N;}
   if(t!=0)N;
   }
   else{

  KMPpreprocessor();
  
   int halfLength=(P.size()/2)-1;
 
   bool flag=true;

   for(int i=halfLength;i<P.size()-1;i++){

      if(arr[i]>=arr[i+1]){
        flag=false;
        break;
      }
   }
   if(flag){cout<<P.size()-arr[P.size()-1];N;}
   else{ cout<<P.size();N;}
   if(t!=0)N;
   }
}
  return 0;
}


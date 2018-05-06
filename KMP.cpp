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


string T="abcdabc";
string P="abc";
int count=0;
int arr[100010];

void KMPpreprocessor(){
 
  int i=1; int j=0;

  while(i<P.length()){

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
re(i,0,P.length())cout<<arr[i]<<" ";
N;
  }

void KmpSearch(){
 
 int i=0;
 int j=0;
bool flag=true;
while(i<T.length()){
 
  if(T[i]==P[j]){
    i++;j++;
    if(j==P.length()){
    cout<<i-j;N;
   flag=false; }
  }
  else if(j>0) j=arr[j-1];
  else i++;
}
if(flag){cout<<" ";N;}

}

int main() {
KMPpreprocessor();
KmpSearch();

	return 0;
}
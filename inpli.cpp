//includes
#include <bits/stdc++.h>

using namespace std;

//defines
 #define all(c) c.begin(), c.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N cout<<"\n" //do not use endl ( it  will reduce speed )
#define O cout<<
#define I cin>>
#define test cout<<"\n--------------testing -------------\n";
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

unsigned ll factorial_of(unsigned ll num){
   if(num<=1)return 1;
   
   return num*factorial_of(num-1);
}
int count_zeros(long long num){
 int count=0;
 for(int i=5;i<=num;i*=5) count+=num/i;

return count;

}

int main() {
  
   
   vector<int> vec;
   int temp;
   while(cin>>temp){
     
   vec.push_back(temp);

     if(vec.size()==1)cout<<vec[0]<<endl;
     else if(vec.size()%2){
       sort(vec.begin(),vec.end());
      cout<<vec[vec.size()/2]<<endl;
     }
     else{
      sort(vec.begin(),vec.end());
    
      cout<<floor((vec[vec.size()/2-1]+vec[vec.size()/2])/2)<<endl;
     }

     }
return 0;
}
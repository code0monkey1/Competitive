#include<bits/stdc++.h>

using namespace std;
bool found;

void my_binary_search(vector<int> & v, int num, int begin,int end){
 int mid=(begin+end)/2;//or [low + (high-low)/2] to avoid int overflow

 if(begin>end)return;
 else if(num==v[mid]){
  cout<<"found at index"<<mid;
  return;
}
else if(num>v[mid])my_binary_search(v,num,mid+1,end);
else my_binary_search(v,num,begin,mid-1);
}
//--------------------------------------------------------------------
void iterative_binary_search(vector<int>& v,int num){
  int start=0;
  int end=v.size()-1;

  while(start<=end){

   int mid=(start + (end-start)/2);
   if(v[mid]==num){
   	cout<<mid;
   	return;
   }
   else if(v[mid]>num)end=mid-1;
   else start=mid+1;

 }
 cout<<"did not find"<<"\n";
}


int main(){

  vector<int > v;
  v.push_back(2);
  v.push_back(3);
  v.push_back(5);
  iterative_binary_search(v,5);

  
  return 0;
}
#include<bits/stdc++.h>

using namespace std;
template<class T>
int  partition (vector<T> & vec,int start,int end){
  int pivot = vec[end];
  int p_index=start;
  for(int i=start;i<end;i++){
     
     if(vec[i]<=pivot){
     	swap(vec[i],vec[p_index]);
      p_index++; 
     }  
  }
  swap(vec[end],vec[p_index]);

  return p_index;
}

template<class T>
void quick_sort(vector<T> & v,int start, int end){

 if(start<end){
  int p_index=partition(v,start,end);
  quick_sort(v,start,p_index-1);
  quick_sort(v,p_index+1,end);
     
 }

}

int main(){

  vector <int> vec;
  vec.push_back(1);
  vec.push_back(4);
  vec.push_back(-1);
  vec.push_back(3);
quick_sort(vec,0,vec.size()-1);

  for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";

	return 0;
}
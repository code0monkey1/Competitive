#include<bits/stdc++.h>

using namespace std;

 template< class T>
void insetion_sort(vector<T> & v){
 
  for(int i=0;i<v.size();i++){
  
    int element=v[i];
     int position=i;

     while(position>0 && v[position-1]>element){
       v[position]=v[position-1]; 
      	position--;
     }
    
     v[position]=element;

  }
   
   
}

int main(){

  vector<int> vec;
  vec.push_back(12);
  vec.push_back(-1);
  vec.push_back(2);
   vec.push_back(1);
  vec.push_back(3);
  vec.push_back(5);

insetion_sort(vec);

for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";

  

}
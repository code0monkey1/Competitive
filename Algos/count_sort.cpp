#include <bits/stdc++.h>

using namespace std;
 
 void count_sort(std::vector<int> & v,std::vector<int> & aux){
     
      for(int i=0;i<v.size();i++){
      	aux[v[i]]++;
      }
    int v_index=0;
    for(int i=0;i<aux.size();i++){
    	 
    	if(aux[i]){
    		int repeats=aux[i];
    		while(repeats--){
             	
             	v[v_index]=i;
             	v_index++;
    		}
    	}
    }
   
 }

int main(){
  std::vector<int > v={2,4,1,6,62,6,6367,14};
  int k=*max_element(v.begin(), v.end());
 
     std::vector<int> aux(k+1,0);
    
     count_sort(v,aux);

     for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

     
}
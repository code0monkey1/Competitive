#include <bits/stdc++.h>

using namespace std;
  
 int main(){


    // int t;
    // cin>>t;
     std::vector<int> v={1, 4, 3, 2, 5};
     //for(int i=0;i<v.size();i++)cin>>v[i];

   
      int k=1+*max_element(v.begin(), v.end());

   		vector<int>aux(k,0);

      for (int i = 0; i < v.size(); ++i) aux[v[i]]++;
   

       remove(aux.begin(), aux.end(),0);

      int sz=aux.size();
   sz--;
       int sum=0;
       while(sz--){
       	sum+=sz;
       }

    cout<<sum;
       

return 0;   
	

}

//zig zag topcoder

#include<bits/stdc++.h>
using namespace std;

int zigzag(const std::vector<int> & v){
  int maxi=0;
  bool is_negative=0;
  int inter_max=0;
  bool positive_switch=0;
  bool negative_switch=0;
  bool start_count=0;

	for(int i=0;i<v.size()-1;i++){
     
      if(!start_count){

      	if(v[i]-v[i+1]<0){
      		is_negative=1;
      		negative_switch=1;
      	}
      	else positive_switch=1;

        start_count=1;
        inter_max++;
      }
      else if(is_negative){

         if(v[i]-v[i+1]>=0 && negative_switch){
        	inter_max++;
       	   negative_switch=0;
           }
         else if((!negative_switch) && v[i]-v[i+1]<0 ){
        	inter_max++;
       	   negative_switch=1;
          }
         else{
        	maxi=max(maxi,inter_max);
        	start_count=0;
           inter_max=0;
            i--;
           }

         }
       else{

        	 if(v[i]-v[i+1]<0 && positive_switch){
        	inter_max++;
       	    positive_switch=0;
           }
         else if((!positive_switch) && v[i]-v[i+1]>=0 ){
        	inter_max++;
       	   positive_switch=1;
          }
         else{
        	maxi=max(maxi,inter_max);
        	start_count=0;
             inter_max=0;
            i--;
           }
        }
       
	}
	maxi=max(inter_max,maxi);
	return maxi+1;
}
int main(){
 string line;
 while(getline(cin,line)){
 	stringstream ss(line);
 	string token;
 	while(getline(ss,token,' ')){
 		reverse(token.begin(), token.end());
        cout<<token<<" ";
 	}
      cout<<endl;
 	}
 	
	return 0;
}
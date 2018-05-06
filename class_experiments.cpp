#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
vector<int> v;
int ind=-1;

 int element;
void bin_search(int low , int high){
	if(low>high)return;
	 int mid=low+(high-low)/2;
            if(v[mid]==element){
            	ind=mid;
            	bin_search(low,mid-1);
            }
            else if(element>v[mid])bin_search(mid+1,high);
            else bin_search(low,mid-1);
         }
    
int main() {
     fastio
     int len,tests;
     cin>>len>>tests;
     
     int t=len;
     int a;
     while(t--){
     	cin>>a;
     	v.push_back(a);
     }
     while(tests--){
    
     cin>>element;
bin_search(0,v.size()-1);
cout<<ind<<"\n";
ind=-1;
     }
     


	return 0;
}

	 
	 
#include <bits/stdc++.h>
using namespace std;

int main_count=0;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
        long long n; cin>>n;
   long long count=0;
     for(long long i=2,j=1;i<=n;i=i<<1,j++){

	     	for(long long k=0;k<j;k++){
               
                if(i+(1<<k) > n)break;

                	count=(count +(i+(1<<k)))%1000000007;
                	
	     	}
     	}
    
     cout<<count<<"\n";
   
     }
	 return 0;
	}

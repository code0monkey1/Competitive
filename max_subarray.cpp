/*input
2
3
1 2 3
4
-1 -2 -3 -4
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;
		int max_positive=0;
		int sum=0;
		
		while(n--){
			int temp;
			cin>>temp;
			sum=max(0,sum+temp);
			max_positive=max(sum,max_positive);
		}

		cout<<max_positive;
		cout<<"\n";

	}

	return 0;
}

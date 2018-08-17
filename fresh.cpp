#include<bits/stdc++.h>


using namespace std;

#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 

int main(){
	FILE_IO;


	int n;cin>>n;
	vector<int> v;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	std::vector<int> result;
	for(int i=n-1;i>=0;i--){
		if(s.find(v[i])==s.end()){
			result.push_back(v[i]);
			s.insert(v[i]);
		}
	}
	reverse(result.begin(),result.end());

	for(auto it: result)cout<<it<<" ";

}

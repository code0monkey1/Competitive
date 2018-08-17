#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main(){
	freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);
	ll t;
	cin>>t;
	cin.ignore();
	vector<string> v;
	while(t--){
		v.clear();
		string s,r;
		getline(cin,s);
		int i=0;
		while(isspace(i++));
		for(;i<s.size();i++){
			if(isspace(s[i])){
				v.push_back(r);
				r.clear();
			}
			else
				r=r+s[i];
		}
		v.push_back(r);
		r.clear();

		auto sortByLength = [] (const auto& a,const auto& b){
			return a.size()<b.size();
		};
		stable_sort(v.begin(),v.end(),sortByLength);
		for(ll i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
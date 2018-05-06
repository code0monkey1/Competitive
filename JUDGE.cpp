#include <bits/stdc++.h>

using namespace std; 
int first,second;

void copying(vector<int> & a){
	for(int i=0;i<a.size();++i)cin>>a[i];
}

int main(){
    freopen("inputf.in","r",stdin);
    //freopen("prepare.out","w",stdout);
  int t;
  cin>>t; 
 std::vector<int> v1(t);
 std::vector<int> v2(t);
  copying(v1);
  copying(v2);
 vector<pair<int,int> > diff_index;
 for(int i=0;i<v1.size();i++){
 	 diff_index.push_back(make_pair(abs(v1[i]-v2[i]),i));
 }
 
  sort(diff_index.rbegin(), diff_index.rend());

  int total=0;
  int i=0;
	 for (auto it: diff_index){
 
		if(i==v1.size()-1 && (!first)){
              total+=v1[it.second];
		}
		else if(i==v1.size()-1 && (!second)){
                 total+=v2[it.second];

		}
		else if (v1[it.second]>=v2[it.second]) {
			 first=true;
			 total+=v1[it.second];
		}
		else{
			second=true;
			total+=v2[it.second];
		}
		i++;
	}
	cout<<total<<endl;

	 return 0;
}
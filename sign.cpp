#include <bits/stdc++.h>

#define ll long long 
#define pb push_back

using namespace std;
int M[26];
int main(){
   
   string s;
   cin>>s;
   set<char> s1(s.begin(),s.end());
   memset(M,0,sizeof(M));
   for(auto it=s.begin();it!=s.end();it++)cout<<*it<<" ";
   
	return 0;
}
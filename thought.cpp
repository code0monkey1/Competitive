#include <bits/stdc++.h>

using namespace std;
int main(){

std::vector<int> v={0,8,6,5,7,3,2,2,11,10,-2,4,1};
v[11]=v[11]+1;
int b2=10;
int b=1;
do{
v[b2]=v[b];
while(b%2){
	v[b2]=v[b];
	b+=2;
	}
v[11]=	v[5]+v[11];
 b+= v[12];
 b2-=v[12];
 }while(b2>v[1]);

 cout<<v[8]<<" "<<v[11];

	return 0;

}




#include <bits/stdc++.h>
using namespace std;

/*THIS DOES NOT WORK IF THE NUMBERS ARE NOT MUTUALLY PRIME */

int n=24; // the number to which all the elemets divisible have to be found
std::vector<int> v={2,3,5,4}; // the vector whose elements will be iteated on (only works on mutually prime)
long long lcm2(long long a,long long b){return (a*b)/ __gcd(a,b);}
int inc_exc(int idx=0,int d=1,int sign=-1){
	if(idx==v.size()){
		if(d==1)return 0; //null set is not counted 
		return sign*n/d; // if no's are even the sign is negative , else +ve
	}
	return inc_exc(idx+1,d,sign)+inc_exc(idx+1,lcm2(d,v[idx]),sign*-1);
}

int main(){

	cout<<inc_exc();

}
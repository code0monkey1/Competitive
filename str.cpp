
#include<bits/stdc++.h>
using namespace std;
/*here it is clear that the solution of subproblem must require to solve 
the solution of original problem.............
So just think that how to calculate the solution for string of length(1,2,3)
then i m sure u will get that how to use solution of subproblem.......
*/
string str;
int main()
{
 while(cin>>str,str[0]!='0'){ 

vector<long long> v(5010,0);
 long long  len=str.length();

 v[0]=1;
 long long int x,i;
 for(i=1;i<len;i++)
 {
   x=stol(str.substr(i-1,2));
       if(str[i]-'0')
       v[i]=v[i-1];
       if(x>=10 && x<=26)
       v[i]+=v[(i-2)<0?0:i-2];
 }
 cout<<v[len-1]<<"\n";
 }
 return 0;
}

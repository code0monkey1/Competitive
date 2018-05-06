/*input
2
5
2 4 2 5 6
4
2 2 2 2
*/
#include <bits/stdc++.h>

using namespace std;

//defines   
 #define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define vii vector< vi >
#define vi vector<int>
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair
#define ivit iterator<int> iterator::it 
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */



     int main(){
     	int t;
     	cin>>t;

     	while(t--){
     		int arr[50001]={0};
     		int survives=1;
     		int n;
     		cin>>n;

     		
     		while(n--){
     			int temp;
     			cin>>temp;
     			
     			arr[temp]++;

     		}

     		int sum=0;

     		re(i,0,50001){
     			
     			if(i%7==0){

     				if(arr[i]+arr[i-1]>i-i/7){
     					sum+=(i-i/7)-arr[i-1];
     					survives=0;
     					break;
     				}
     				else {
     					sum+=arr[i];
     				}
     			}
     			else if( arr[i]>i-i/7){
     				sum+=i-i/7;
     				survives=0;
     				break;

     			}
     			else{
     				sum+=arr[i];
     			}
     			
     		}

     		survives?cout<<"Rick now go and save Carl and Judas\n":cout<<"Goodbye Rick\n"<<sum<<"\n";
     	}

     	return 0;
     }




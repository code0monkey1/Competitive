/*input
3
5 1
jhoolz littleboy cooldude findingathar findingnemo
3 1
bawa chunnu kundan
3 2
kaddu babykaddu littlejhool
*/
#include <bits/stdc++.h>

using namespace std;

//defines   

#define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair
#define FF first
#define SS second

//typedef

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */



     int main(){

          int t;
          cin>>t;
          while(t--){

             vector<pair<int,string> >vn;

             int N;
             int top;
             cin>>N>>top;

             string s;
             while(N--){
                  int ar[8]={0};
                  cin>>s;
                  re(i,0,s.size()){
                    char temp=isupper(s[i])?tolower(s[i]):s[i];
                    if(temp=='l'){
                       ar[0]=1;
                  }
                  if(temp=='i'){
                       ar[1]=1;
                  }
                  if(temp=='t' ){
                       ar[2]=1;
                  }
                  if(temp=='e'){
                       ar[3]=1;
                  }
                  if(temp=='j' ){
                       ar[4]=1;
                  }
                  if(temp=='h' ){
                       ar[5]=1;
                  }
                  if(temp=='o' ){
                       ar[6]=1;
                  }
                  if(temp=='i'){
                       ar[7]=1;
                  }

             }
             int sum=0;
             re(i,0,8)sum+=ar[i];

             vn.pb(mp(sum,s));
        }

        stable_sort(all(vn),[]( const pair<int,string> & p1, const pair<int,string> & p2){ return p2.first>p1.first;});


        for(int i=0;i<top;i++){
            cout<<vn[i].SS<<" ";
       }
       cout<<"\n";
  }

  return 0;   
}



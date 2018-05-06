#include<bits/stdc++.h>

 using namespace std;

//defines   
 #define all(c) c.begin(), c.end() 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define vii vector< vector<int> >
#define vi vector<int>
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define ret(i,a,b) for(size_t i(a);i<int(b);i++)
#define container(type,name) for(container<type>::iterator it=name.begin();it!=name.end();it++)
#define pb push_back
#define all(c) c.begin(), c.end() 
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair

#define SSTR( x ) static_cast< std::ostringstream & >(( std::ostringstream() << std::dec << x ) ).str()
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */

 void valid_map(const vector<vector<char> > & v,int r,int c){
   bool flag=false;
   bool forward=false;
   bool backward=false;
   bool up=false;
   bool down=false;

  int i=0;
  int j=0;

   set <string> signature;
  
     while(true){
     
     if(i==r ||i<0||j<0 || j==c || signature.find(SSTR(i)+SSTR(j))!=signature.end()){
     	cout<<"!\n";
     	return;
     }

    signature.insert(SSTR(i)+SSTR(j));  

     char c =v[i][j];

     if(c=='>'){
        forward=true;
        backward=false;
        up=false;
        down=false;

     }
     else if(c=='<'){
     	backward=true;
     	up=false;
        down=false;
        forward=false;
     }
     else if( c=='^'){
     	backward=false;
     	up=true;
        down=false;
        forward=false;
     }
     else if( c=='v'){
     	backward=false;
     	up=false;
        down=true;
        forward=false;
     }
     else if(v[i][j]=='*'){
     	cout<<"*"<<endl;
     	return;
     }
     
      if(forward)
       j++;
       else if(backward)
       j--;
      else if(up)
       i--;
      else if(down)
       i++;
     }
 }

 

 
int main() {
 
 int l,b; cin>>b>>l;

 vector<vector <char> > a_map (l,vector<char>(b));
    char temp=0;
   for(int i=0;i<l;i++)
   	for(int j=0;j<b;j++){
   	cin>>temp;
   	a_map[i][j]=temp;
   }
  
  valid_map(a_map,l,b);
   
 
    return 0;
}

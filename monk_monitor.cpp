#include<bits/stdc++.h>

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
/*   FILE IO 
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
 */
  bool is_rahuls_word_palindrome(int i){

  	  string s=to_string(i);
  	  if(!isdigit(s[0]))s=s.substr(1);

  	  for(int i=0, j=s.length()-1;i<j;i++,j--){
             
              if(s[i]!=s[j])return false;
  	  }   

  	  return true;
  }

int main(){
 
  
  int a=-10001;
  cout<<is_rahuls_word_palindrome(a);

  
return 0;   
}


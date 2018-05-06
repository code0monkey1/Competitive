#include<bits/stdc++.h>
#define FILE_IO   freopen("in.txt","r",stdin); freopen("out.txt","w",stdout); 
using namespace std;
int main()
{ FILE_IO
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double arr[n][2];
        char d[n];
        int i =0, j = 0; int ans = n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i][0]>>arr[i][1]>>d[i];
        }
        for(i=0;i<4005;i++)
        {
            for(j=0;j<n;j++)
            {
                
                    if(d[j]=='N') arr[j][1]+=0.5; 
                    if(d[j]=='S') arr[j][1]-=0.5; 
                    if(d[j]=='E') arr[j][0]+=0.5; 
                    if(d[j]=='W') arr[j][0]-=0.5; 
                    
                
            }
            for(j=0;j<n-1;j++)
            {int k;int ch = 0;
                for(k=j+1;k<n;k++)
                {
                    if(arr[j][0]==arr[k][0] && arr[j][1]==arr[k][1])
                    {ch=1;
                     ans--;
                     arr[k][0]=arr[k][1]= ans*5000;
                    }
                }
                if(ch==1)
                    {
                        ans--;
                        arr[j][0]=arr[j][1]= ans*5000;
                    }
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
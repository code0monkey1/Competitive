#include <iostream>
#include <math.h>
using namespace std;
#define RE(i,b) for(int i=0;i<int(b);i++)
#define SQR(x) (x)*(x)

int main(){


	int grid[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>grid[i][j];
		}
	}

	double maxx=0;
	for (int i = 0; i < 3; ++i)
	{   
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{   
				if(i!=j and j!=k and k!=i){
					double temp=sqrt(SQR(grid[0][i])+SQR(grid[1][j])+SQR(grid[2][k]));
					maxx=max(temp,maxx);
				}
			}
		}
	}

	cout<<maxx;


	return 0;
}
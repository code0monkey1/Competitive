//includes
#include <bits/stdc++.h>

using namespace std;

//defines
 #define all(c) c.begin(), c.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define N cout<<"\n" //do not use endl ( it  will reduce speed )
#define O cout<<
#define I cin>>
#define test cout<<"--------------testing -------------\n";
#define ll long long
#define re(i,a,b) for(int i=int(a);i<int(b);i++)
#define ret(i,a,b) for(size_t i(a);i<int(b);i++)
#define container(type,name) for(container<type>::iterator it=name.begin();it!=name.end();it++)
#define pb push_back
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end()) //for map,set..etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
#define mp make_pair

int array[100010]={65,12,89,23,0,14,12,86,54,22,11,73};
 int length=12;
   int index=0;
  vector<int> arr;

  void merge(int parent_array[],int a[],int b[] ,int alength,int blength){
	  
	  int aindex=0;
	  int bindex=0;
	  int i=0;
	    while(i<alength+blength)
			if(aindex==alength)parent_array[i++]=b[bindex++];	
			else if(bindex==blength)parent_array[i++]=a[aindex++];
			else parent_array[i++]=a[aindex]>b[bindex]?b[bindex++]:a[aindex++];
// re(i,0,alength+blength)cout<<arr[i]<<" ";
  }
    void vec_merge(vector<int> & parent,vector<int> & child1,vector<int> & child2){

    int child1_index=0;
    int child2_index=0;
    int parent_index=0;

    while(parent_index<parent.size())
    	if(child1.size()==child1_index)parent[parent_index++]=child2[child2_index++];
        else if (child2.size()==child2_index)parent[parent_index++]=child1[child1_index++];
        else parent[parent_index++]=child1[child1_index]>child2[child2_index]?child2[child2_index++]:child1[child1_index++];

  }

  void mergesort(int arr[],int arr_length){
	  
	  if(arr_length<=1)return;
	  
	  int midpt=arr_length/2;
	  int arr_index=0;
	  int* a=new int[midpt];
	  int* b=new int[arr_length-midpt];

	  re(i,0,midpt)a[i]=arr[arr_index++];
	  re(j,0,arr_length-midpt)b[j]=arr[arr_index++];
	  
	   mergesort(a,midpt);
	   mergesort(b,arr_length-midpt);
       merge(arr,a,b,midpt,arr_length-midpt);
	   delete[] a;
	   delete[] b;  
  }

  void vec_mergesort(vector<int> & vec){

  	if(vec.size()<=1)return;

  	int mid=vec.size()/2;

  	vector<int> child1,child2;
  
   int vec_index=0;

  	for(int i=0;i<mid;i++)child1.pb(vec[vec_index++]);
  	for(int j=0;j<vec.size()-mid;j++)child2.pb(vec[vec_index++]);

  		vec_mergesort(child1);
  	    vec_mergesort(child2);

  	    vec_merge(vec,child1,child2);

  }

int main() {
int temp=0;
while(cin>>temp)arr.pb(temp);

vec_mergesort(arr);
for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";

return 0;
}
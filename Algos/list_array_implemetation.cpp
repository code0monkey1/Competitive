#include<bits/stdc++.h>

using namespace std;
   int size=10;
   int* arr=new int[size];
   int index=-1;

 void insert_element(int element){
    
    if(index-1<size){
    	index++;
    int temp=arr[0];
    for(int i=0;i<index;i++){
     int tempo=arr[i+1];
     arr[i+1]=temp;
     temp=tempo;
    }
    arr[0]=element;
  }
  else{
  	size*=2;
  int* temp_arr=new int[size];

  for(int i=0;i<size;i++)temp_arr[i]=arr[i];
    delete []arr;

   arr=temp_arr;
  insert_element(element);

  }


    }
int main(){
  
insert_element(12);
insert_element(13);
insert_element(14);
insert_element(15);
insert_element(16);
insert_element(17);
insert_element(18);
insert_element(19);
insert_element(20);
insert_element(21);
insert_element(22);

 for(int i=0;i<size;i++)cout<<arr[i]<<" ";
   


}
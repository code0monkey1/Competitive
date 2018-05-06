#include<bits/stdc++.h>

using namespace std;

void string_decode(string & s1 , string & s2){

	for(int i=0;i<s1.length();i++){

		if(isdigit(s1[i]) && i+2<s1.length()){

			int temp=i;

			if(s1[temp+1] =='-' && isdigit(s1[temp+2])){
				
				temp =distance(s2.begin(), s2.find(s2[i+2]) );
				for(temp;s2[temp]!=s1[i+2];i++)putchar(s2[temp]);
					putchar(s2[temp]);
				i++;
				cout<<endl;
			}
    }
		
		else if(isalpha(s1[i]) && i+2<s1.length()){

			int  temp =i;

			if(s1[temp+1] =='-' && isalpha(s1[temp+2])){
				temp=strstr(&s2[0],&s1[temp]);
				for(temp;s2[temp]!=s1[i+2];i++)putchar(s2[temp]);
					putchar(s2[temp]);
				i++;
				cout<<endl;
			}

		}

	}
}

int main(){
 
string s1,s2;
s1="1-9 -7-9 a-z";
s2="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
string_decode(s1,s2);
	return 0;
}
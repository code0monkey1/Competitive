

#include <bits/stdc++.h>

using namespace std;


vector <string> split(string & s, char character_to_separate ){

	std::vector<string> v;

	stringstream sts(s);

	string token;
	while(getline(sts,token,character_to_separate)){

		v.push_back(token);
	}

	return v;
}
void printModifiedString(char s[]) {

	set<char> sc;
	string  st;

	for(int i=0;i<(int)strlen(s);i++){
		st.push_back(s[i]);
	}

	stringstream ss(st);
	string token;
	vector<string> sv;
	while(getline(ss,token,' ')){
		sv.push_back(token);
	}

	debug(sv);
	string main_str="";
	for(int i=0;i<sv.size();i++){

		string tp=sv[i];
		string str="";
		for(int j=0;j<tp.size();j++){
			if(sc.find(tp[i])==sc.end()){
				sc.insert(tp[i]);
				str+=tp[i];
			}
		}
		main_str+=str;
		if(i+1<sv.size()){
			main_str+=" ";
		}
	}

	cout<<main_str;
}
int main(){

	char c[]="this is my company";

	printModifiedString(c);

}
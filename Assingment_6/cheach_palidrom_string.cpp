#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin>>str;
	string s="";
	for(int i=str.size()-1;i>=0;i--){
		s=s+str[i];
	}
	if(str==s){
		cout<<"true";
	}else{
		cout<<"false";
	}
	return 0;
}
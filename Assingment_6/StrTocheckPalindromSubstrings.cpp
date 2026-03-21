#include<iostream>
#include<string>
using namespace std;
int isPalidrom(string s){
	int r=s.size()-1;
	int l=0;
	while(l<=r){
		if(s[l]!=s[r]){
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main() {
	string str;
	cin>>str;
	int count=0,i;
	
	for(i=0;i<str.size();i++){
		for(int j=i;j<str.size();j++){
			string s=str.substr(i,j-i+1);
			if(isPalidrom(s)){
			count++;
			}
		}
		}

	cout<<count;
	return 0;
}
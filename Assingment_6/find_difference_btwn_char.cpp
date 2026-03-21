#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin>>str;
	int dif;
	for(int i=0;i<str.size();i++){
		if(i<str.size()-1){
		dif=str[i+1]-str[i];
		cout<<str[i]<<dif;
		}else{
			cout<<str[i];
		}
		
	}
	return 0;
}
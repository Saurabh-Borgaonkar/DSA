#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin>>str;
	int i=0;
	int count;
	while(i<str.size()){
		count=0;
		char ch=str[i];
		for(int j=i;j<str.size();j++){
			if(ch!=str[j]){
				break;
			}
			count++;
		}
		if(count!=1){
		cout<<str[i]<<count;
		}else{
			cout<<str[i];
		}
		i=i+count;
	}
	return 0;
}
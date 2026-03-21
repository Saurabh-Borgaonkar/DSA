#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	string str;
	cin>>str;
	vector<char>ans;
	for(int  i=0;i<str.size();i++){
		if(str[i]==str[i+1]){
			continue;
		}
		char ch=str[i];
		ans.push_back(ch);
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i];
	}
	return 0;
}
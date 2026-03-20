#include<iostream>
#include<string>

using namespace std;
int main() {
	int t;
	cin>>t;
	int k=0;
	string str[t];
	while(k<t){
	cin>>str[k];
	k++;
	}
	int i=0;
	int count;
	char ch,c;
	string s;
for(int i=0;i<t;i++){
		s=str[i];
		for(int j=0;j<s.size();j++){
			char ch=s[j];
			count=0;
			for(int k=0;k<s.size();k++){
			if(ch==s[k]){
			count++;
				}
		}
		if(count==1){
		c=s[i];
		break;
		}
	}
	cout<<c<<endl;
}
	return 0;
}
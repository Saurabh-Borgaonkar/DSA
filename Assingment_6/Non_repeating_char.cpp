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
	int count;
	char c;
	string s;
for(int i=0;i<t;i++){
		s=str[i];
		bool found=false;
		for(int j=0;j<s.size();j++){
			char ch=s[j];
			count=0;
			for(int k=0;k<s.size();k++){
			if(ch==s[k]){
			count++;
				}
		}
		if(count==1){
		cout<<ch<<endl;
		found=true;
		break;
		}
	}
	if(!found){
			cout<<-1<<endl;
		}
}
	return 0;
}
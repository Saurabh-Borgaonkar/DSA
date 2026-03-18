#include<iostream>
using namespace std;
#include<string>
int main() {
	int m,n;
	cin>>m>>n;
	int S,k;
	cin>>k>>S;
	int s=S;
	char arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s<=k){
				cout<<"No";
				return 0;
			}
			if(arr[i][j]=='.'){
				s=s-2;
			}
			if(arr[i][j]=='*'){
				s=s+5;
			}if(arr[i][j]=='#'){
				break;
			}
			if(j!=n-1){
				s=s-1;
			}
		}
	}
	if(s>=k){
		cout<<"Yes"<<endl<<s;
	}
	return 0;
}
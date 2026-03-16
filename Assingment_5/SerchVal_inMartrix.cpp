#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int x;
	int flag=0;
	cin>>x;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==x){
				flag=1;
				break;
			}
		}
	}
	if(flag==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
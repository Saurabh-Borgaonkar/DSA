#include<iostream>
#include <algorithm>
using namespace std;
int main () {
	int m,n;
	cin>>m>>n;
		int arr[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int k=0;k<n-1;k++){
		for(int j=0;j<n-1;j++){
			if(arr[i][j]>arr[i][j+1]){
				swap(arr[i][j], arr[i][j+1]);
			}
		}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}
	
	return 0;
}
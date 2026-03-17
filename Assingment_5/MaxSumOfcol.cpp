#include<iostream>
#include<climits>
using namespace std;
int main () {
	int n;
	cin>>n;

	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
    int max = INT_MIN;
    int index=-1;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
			index=j+1;
        }
    }
    cout<<index<<" "<<max;
	return 0;
}
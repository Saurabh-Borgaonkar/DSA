#include<iostream>
using namespace std;
void inverse(int arr[], int i, int n){
    if(i == n){
        return;
    }

    int val = arr[i];
    inverse(arr, i + 1, n);
    arr[val] = i;
}
int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
	inverse(arr,0,n);	
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
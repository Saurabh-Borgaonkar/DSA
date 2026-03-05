#include<iostream>
// #include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;
	int index=-1;
    // sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			index=i;
		}
	}
	cout<<index;
		return 0;
	}
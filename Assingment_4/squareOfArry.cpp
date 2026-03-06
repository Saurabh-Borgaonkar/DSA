#include <iostream>
#include<algorithm>
using namespace std;
int main() {
      int n;
        cin >> n;

        int arr[n];
        int arr2[n];

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            arr2[i]=arr[i]*arr[i];
        }
        sort(arr2, arr2+n);
         for(int i=0;i<n;i++){
            cout<<arr2[i]<<" ";
        }

}
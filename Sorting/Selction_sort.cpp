#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[min]>arr[j]){
               min=j;
            }
        }
        if(arr[min]!=arr[i]){
            swap(arr[i],arr[min]);
        }
    }
    cout<<"Shorted Arr : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
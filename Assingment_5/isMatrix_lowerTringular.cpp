#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    bool ans = true;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i && arr[i][j]!=0){
                ans = false;
            }
        }
    }

    if(ans){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}
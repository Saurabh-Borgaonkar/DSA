#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=1;j++){   
            if(i==j){
                cout<<"1 ";
            }else cout<<i-1;
    }
    for(int j=2;j<=2*i-2;j++){
        cout<<" ";
    }
    if(i!=1){
    cout<<i-1;
    }
    cout<<endl;
} 


    for(int i=m-1;i>=1;i--){
        for(int j=1;j<=m-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=1;j++){   
            if(i==j){
                cout<<"1 ";
            }else cout<<i-1;
    }
    for(int j=2;j<=2*i-2;j++){
        cout<<" ";
    }
    if(i!=1){
    cout<<i-1;
    }
    cout<<endl;
} 
    return 0;
}
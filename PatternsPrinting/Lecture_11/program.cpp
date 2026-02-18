#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=2*(m-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for (int j = 1;j<=2*i-3;j++)
        {
        cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            if(i!=1){
            cout<<j<<" ";
        }
    }
        cout<<endl;   
}


    for(int i=m-1;i>=1;i--){
        for(int j=1;j<=2*(m-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for (int j = 1;j<=2*i-3;j++)
        {
        cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            if(i!=1){
            cout<<j<<" ";
            }

        }
        cout<<endl;   
    }
    return 0;
}
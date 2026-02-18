#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=m;i>=1;i--){
        for(int j=m;j>=i-1;j--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){   
            if(j%2==0){
                cout<<"0";
            } else   cout<<"1";
        }
        cout<<endl;
    }
     for(int i=2;i<=m;i++){
          
          for(int j=m;j>=i-1;j--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){   
            if(j%2==0){
                cout<<"0";
            } else   cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}
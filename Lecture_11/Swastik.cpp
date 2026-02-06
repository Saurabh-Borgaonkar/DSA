#include<iostream>
using namespace std;

int main(){
int n;
cin>>n; 
int m=(n+1)/2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
            if((j==1 && j<m)){
                cout<<"* ";
            }
            else{cout<<"-";
            }
    }
    cout<<endl;
}
return 0;
}
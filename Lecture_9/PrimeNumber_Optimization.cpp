//Cheak a number is Prime or Not with optimaizatin method

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=false;
        }
    }

    if(flag){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}
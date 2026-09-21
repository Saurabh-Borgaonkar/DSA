#include<iostream>
using namespace std;
int main(){
    int n,pos;
    cin>>n;
    cin>>pos;
    int bitmask=1<<pos;
    if((n & bitmask)==0){
        cout<<"bit was Zero";
    }else{
        cout<<"bit was one";
    }
    return 0;
}
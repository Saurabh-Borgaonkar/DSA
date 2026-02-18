
//Reverse a number

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    int val=0;
    cin>>n;
    while(n!=0){
        int k=n%10;
        val=val*10+k;
        n=n/10;
    }
    cout<<val<<endl;
    return 0;
}
//if number sum 

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,sum=0;
    int val=0;
    cin>>n;
    while(n!=0){
        int k=n%10;
        sum=k+sum;
        val=val*10+k;
        n=n/10;
    }
    cout<<val<<endl;
    cout<<abs(sum);
    cout<<"Sum : "<<sum;
    return 0;
}
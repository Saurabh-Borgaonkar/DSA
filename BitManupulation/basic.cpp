#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int sum=0;
    for(int i : arr){
        sum+=i;
    }
        cout<<sum;
    return 0;
}
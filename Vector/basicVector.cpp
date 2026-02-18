#include<iostream>
#include<vector>
using namespace std;
int main(){
    //initialization
    int ele;
vector<int>  arr;
for(int i=0;i<5;i++){
cin>>ele;
arr.push_back(ele);
}

for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}
    return 0;
}
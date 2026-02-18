#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //initialization
vector<int> arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(4);
arr.push_back(4);
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}

//find 
cout<<endl<<arr.front()<<endl;

//last find
cout<<arr.back()<<endl;


arr.insert(arr.begin()+2,7);
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}
cout<<endl<<" Reverse : ";
reverse(arr.begin(),arr.end());
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}
cout<<endl<<"Sorted :";
sort(arr.begin(),arr.end());
for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}

    return 0;
}
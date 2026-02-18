#include<iostream>
#include<vector>
using namespace std;
vector<int> convert(int num){
    vector<int> number1;
    while (num!=0)
    {
        int ld=num%10;
        number1.push_back(ld);
        num=num/10;
    }
    return number1;
}
int main(){
    int num;
    cin>>num;
    vector<int> number=convert(num);
    vector<int> ans(number.size()+1);
    for(int i=0;i<number.size();i++){
        ans[number[i]]=i+1;
    }
    
     for(int i=number.size();i>=1;i--){
        cout<<ans[i];
    }
    return 0;
}
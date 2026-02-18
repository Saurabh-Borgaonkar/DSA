#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int rev(int n){
    int bn=0;
      while(n>0){
        int m=n%10;
         bn=bn*10+m;
         n=n/10;
    }
    return bn;
}
int main(){
    int n,bn=0;
    cin>>n;
    while(n!=0){
        int m=n%2;
         bn=bn*10+m;
         n=n/2;
    }
    //   string s = to_string(bn);  
    // reverse(s.begin(), s.end());  
    //  int reversed = stoi(s); 
    //  cout<<reversed;
    cout<<bn<<endl;
    cout<<rev(bn);
    return 0;
}
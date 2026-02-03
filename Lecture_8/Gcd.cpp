#include<iostream>
using namespace std;
// int  gcd(int a, int b){
//       for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0){
//     cout<<"Ans : "<<i;
//     break;
//         }
//     }
//     return 0;
// }
int main(){
    int a,b;
    cin>>a>>b;
//   gcd(a,b);
while(b!=0){
    int t=a%b;
    a=b;
    b=t;
}
cout<< a;
return 0;
}
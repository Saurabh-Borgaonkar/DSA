#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int count=0;
    while (n!=0)
    {
      int  ld=n%10;
      if(ld==m)
      {
        count++;
    } 
      n=n/10;
    }
   cout<<count<<endl;
    
    return 0;
}
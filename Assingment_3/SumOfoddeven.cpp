//Find the sum of Odd digits and Even digits

#include<iostream>
using namespace std;
int main(){
    int n,Esum=0,Osum=0;
    cin>>n;
    int pos=1;
    while (n!=0)
    {
      int  ld=n%10;
      if(pos%2==0)
      {
     Esum=Esum+ld;
      } else{
        Osum=Osum+ld;
      }
      n=n/10;
      pos++;
    }
    cout<<"Even digit Sum : "<<Esum<<endl;
    cout<<"Odd digit Sum : "<<Osum;
    
    return 0;
}
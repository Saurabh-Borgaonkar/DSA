#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
	int i=0;
    while (n!=0)
    {
      int  ld=n%10;
	  		int s=pow(2,i);
			sum=sum+(s*ld);
            i++;
      n=n/10;
    }
    cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int main() {
	int n1,n2,i=1,m=1;
	cin>>n1;
	cin>>n2;
	int num=0;
	while(i<=n1)
	{
        num=3*m+2;
		if(num%n2!=0){
			cout<<num<<endl;
            i++;
		}
        m++;
	}
	return 0;
}
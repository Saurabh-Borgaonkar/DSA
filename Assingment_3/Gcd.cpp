//Greatest common factor of two numbers

#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int gcd=0;
	int max=(n1>n2)?n1:n2;
    cout<<"Max: "<<max<<endl;
	for(int i=2;i<=max;i++){
		if(n1%i==0 && n2%i==0){
			gcd=i;
		}
	}
	cout<<"Gcd of 2 nums : "<<gcd;
	return 0;
}
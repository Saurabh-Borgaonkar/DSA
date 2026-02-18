//finds the armsstrongs numbers in given range

#include<iostream>
#include<cmath>
using namespace std;
	int findlength(int temp){
        int l=0;
	while(temp!=0){
		temp=temp/10;
		l++;
	}
	return l;
	}
int main() {
	int len=0;
	int n1,n2;
	cin>>n1>>n2;
	for(int i=n1;i<=n2;i++){
		len=findlength(i);
		int n=i;
        int sum=0;
	while(n!=0){
		int k=n%10;
		sum=sum+pow(k,len);
		n=n/10;
	}
	if(i==sum){
		cout<<i<<endl;
	}
	}
	return 0;
}
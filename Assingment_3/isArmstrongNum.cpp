//Number is Armstrong or not

#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int num,int len){
int n=num;
int sum=0;
while(n!=0){
	int ld=n%10;
	sum=sum+pow(ld,len);
	n=n/10;
}
return (num==sum);
}
int main() {
	int n;
	int len=0;
	cin>>n;
	int temp=n;
	while(temp!=0){
		temp=temp/10;
		len++;
	}
	if(isArmstrong(n,len)){
		cout<<"true"<<endl;
	}else 
	{
		cout<<"false"<<endl;
	}
	return 0;
}
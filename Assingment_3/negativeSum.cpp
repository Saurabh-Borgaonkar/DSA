//take input till which doesn't give any negative sum


#include<iostream>
using namespace std;
int main() {
	int n;
	int sum=0;
	while(cin>>n){
		sum=sum+n;
		if(sum<0){
            cout<<"Negative Sum : "<<sum;
			break;
		}
		cout<<"Positive Sum : "<<sum<<endl;
	}
	return 0;
}
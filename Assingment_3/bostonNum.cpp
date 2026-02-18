#include<iostream>
using namespace std;
int digitsum(int n){
    int sum=0;
    while(n!=0){
        int k=n%10;
        sum=sum+k;
        n=n/10;
    }
    return sum;
}
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
	int n;
	cin>>n;
	int factors=0;
	int sum=0;
    sum=digitsum(n);
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(prime(i)){
                factors=factors+digitsum(i);
            }
            n=n/i;
        }
    }
    cout<<sum<<endl;
    cout<<factors<<endl;
    if(sum==factors){
        cout<<"Boston"<<endl;
    }else{
        cout<<"Not boston";
    }
	return 0;
}
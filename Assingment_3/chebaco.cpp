#include <iostream>
using namespace std;
int lengthh(int num){
	int l=0;
while(num!=0){
	num=num/10;
	l++;
}
return l;
}
int revers(int num){
	int rev=0;
	while(num!=0){
		int ld=num%10;
		rev=rev*10+ld;
		num=num/10;
	}
	return rev;
}
int main() {
  int num;
  cin>>num;
  int len=lengthh(num);
  int rev=1;
  while(num!=0){
	  int ld=num%10;
	  int inv=9-ld;
	  if(len==1 && inv==0){
		  rev=rev*10+ld;
	  }
	  if(inv<ld){
		  rev=rev*10+inv;
	  }else{
		   rev=rev*10+ld;
	  }
      num=num/10;
	  len--;
  }
   cout<<revers(rev)/10;
    return 0;
}
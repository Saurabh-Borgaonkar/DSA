#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
   int i=0;
   while(i<str.size()){
       int c=0;
       char val=str[i];
        for(int j=i;j<str.size();j++){
            if(str[j]==val){
                c++;
            }
            else break;
            }
       cout<<str[i]<<c;
       i+=c;
   }
    return 0;
}

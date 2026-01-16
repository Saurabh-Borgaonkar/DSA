#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=300  && n<=460){
        cout<<"You Won a Macbook";
        if(n>=300 && n<=380)
        cout<<"Model:m1 Mac";
        else if(n>=380 && n<=460)
    cout<<"Model : m2";
    }
      if(n>=200  && n<=280){
        cout<<"You Won a pack of kurkure";
        if(n>=200 && n<=240)
        cout<<"Flavor Chilli kurkure";
        else if(n>=241 && n<=280)
    cout<<"Onion Kurkure";
    }
      if(n>=1100  && n<=1500){
        cout<<"You Won a Cycle";
        if(n>=1100 && n<=1300)
        cout<<"Brand:Avon Cycle";
        else if(n>=1301 && n<=1500)
    cout<<"Bramd :Hero cycle";
    }
      if(n>50 && n<=80){
        cout<<"You Won a byke";
        if(n>50 && n<=65)
        cout<<"Model :Bullet";
        else if(n>65 && n<=80)
    cout<<"Mode;rajdoot";
    }
   
   
   
    return 0;
}
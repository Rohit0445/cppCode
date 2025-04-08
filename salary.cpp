#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter your salary";
    cin>>a;
    
    (a>0 && a<50000)?cout<<a+(a*5/100): cout<<a+(a*10/100);
}
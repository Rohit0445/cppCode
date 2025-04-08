#include <bits/stdc++.h>
using namespace std;
int main(){
 int num;
 cout<<"Enter a three digit number : ";
 cin>>num;

 if(num>=100 && num<1000){
    
    int a=(num % 10);
    num = (num / 10);
    int b = (num % 10);
    num = (num / 10);
    int c = (num % 10);
    num = (num / 10);

    cout<<a+b+c ;
 }

 else {
    cout<<"Invalid";
 }
}
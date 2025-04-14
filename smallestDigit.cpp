#include <iostream>
using namespace std;
int main(){
    int num ,  ans=9;
    cout<<"Enter a NUmber :";
    cin>>num;

    while(num>0){
        int digit = num%10;
        if(ans>digit){
            ans=digit;
        }
        num=num/10;
    }
    cout<<"smallest digit of a number is : "<<ans;
} 
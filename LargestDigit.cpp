#include <iostream>
using namespace std;
int main(){
    int num , greater, ans=0;
    cout<<"Enter a NUmber :";
    cin>>num;

    while(num>0){
        greater = num%10;
        if(ans<greater){
            ans=greater;
        }
        num=num/10;
    }
    cout<<"greatest digit of a number is : "<<ans;
} 
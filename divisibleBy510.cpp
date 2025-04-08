#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"entyer a number";
    cin>>num;
    (num%5==0 && num%10==0)?cout<<"number is divisible by 5 or 10":cout<<"number is not divisible by 5 or 10";
}
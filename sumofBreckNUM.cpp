#include <iostream>
using namespace std;

int main(){
    int a=0;
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    while (num>0)
    {
       int digit= num%10;
    a=(a+digit);
    num=num/10;

    }

    cout<<a;
    

    
    
    
}

    

#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter first  Number";
    cin>>num1;

    cout<<"Enter second  Number";
    cin>>num2;

    cout<<"Enter third  Number";
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"First number is larger ";

    }

    else if (num2>num1 && num2>num3){
        cout<<"second Number is larger";

    }

    else{
        cout<<"third number is larger";
    }

}
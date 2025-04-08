#include <iostream>
using namespace std;


int main(){

    int num , ans=0;

    cout<<"Enter a NUm : ";
    cin>>num;

    for (int i = 1; i <num; i++)
    {
        if (num%i==0){
            ans=ans+i;
        }
        
    }

    if (ans==num){
        cout<<"number is perfect ";
    }
    else{
        cout<<"invalid";
    }

    

    

}

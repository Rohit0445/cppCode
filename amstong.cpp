#include <iostream>
using namespace std;

int main(){

    int num , sum=0;
    cout<<"Enter a Number : ";
    cin>>num;

   int ans=num;

    

    while(num>0){

        int a=(num % 10);
            sum=sum + a * a * a ;
            num=num/10;

    }

    if(sum==ans){
        cout<<"Amstrong NUmber";
    }

    else{
        cout<<"Not an amstrong Number ";
    }
}
#include <iostream>
using namespace std;

int main(){

    int num , sum=0,length=0;
    cout<<"Enter a Number : ";
    cin>>num;

   int ans=num;

    
 while (num>0)
 {
    length++;
    num/=10;
 }
 num=ans;
 
    while(num>0){

        int rem=num%10;
        int res=1;
        for(int i=1;i<=length;i++){
            res*=rem;
        }
        sum+=res;
        num/=10;

    }

    if(sum==ans){
        cout<<"Amstrong NUmber";
    }

    else{
        cout<<"Not an amstrong Number ";
    }
}
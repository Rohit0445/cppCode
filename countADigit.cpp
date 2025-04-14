#include <iostream>
using namespace std;
 int main(){
     int num , ans=0;
      cout<<"Enter a NUmber :";
    cin>>num;
     
     while(num>0){
         ans++;
          num = num/10;

    
     }
    cout<<ans;
 }

#include <iostream>
using namespace std;

int main(){
    int c ;
    string s;
    cout<<"Enter which type of loan you want loan : ";
    cin>>s;

    if(s=="homeloan"){
       cout<<"Enter Your Civil Score out of 700 : ";
       cin>>c;

       if(c>=300 && c<=400){
        cout<<"according to your civil score you can take loan of 250000 and you have to pay at the rate of 5% is 2"<<((250000*5)/100)+250000;

       }

       else if(c>400 && c<=500){


       }

       else if (c>500 && c<=700){


       }

       else {
        cout<<"You are not elligible for loan ";
       }


    }

    else{
        cout<<"This loan is not available ";
    }
}
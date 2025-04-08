#include <iostream>
using namespace std;

int main(){

    int p;
    string s;
    cout<<"Enter Your password";
    cin>>p;

    if(p==1234){
        cout<<"choose one opttion what you want to do check Balance , Deposit, withdraw : ";
        cin>>s;

        if(s=="Balance"){
            cout<<"20000";

        }

        else if(s=="deposit"){
            cout<<" how much you deposit : ";
            cin>>p;
            cout <<"This is your balace"<<p+20000;
            
        }

        else if (s=="withdraw"){
            cout<<" how much you Withdraw : ";
            cin>>p;
            cout <<"This is your balace"<<p-20000;
        }

        else{
            cout<<"Invalid option";
        }

    }

    else{
        cout<<"Invalid Password";
    }
}
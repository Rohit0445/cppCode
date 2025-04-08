#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter pin :";
    cin>>num;
    (num==1234)?cout<<"Welcome":cout<<"reenter PIN :";
    cin>>num;
    (num==1234)?cout<<"Welcome":cout<<"reenter PIN :";
    cin>>num;
    (num==1234)?cout<<"Welcome":cout<<"Card Blocked ";
    

}
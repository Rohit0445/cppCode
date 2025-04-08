#include <iostream>
using namespace std;

int main(){

    int base , power , ans=1;

    cout<<"Enter a base : ";
    cin>>base;

    cout<<"Enter a power of base : ";
    cin>>power;

    for (int i = 1; i <=power; i++)
    {
        ans=ans*base;
    }

    cout<<ans;
    
}
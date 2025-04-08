#include <iostream>
using namespace std;

int main(){
    string p;
    
    cout<<"Enter website name : ";
    cin>>p;

    if(p=="Flipkart"){
        cout<<"Enter you want Product OR Service";
        cin>>p;
        

        if (p=="product"){
            cout<<"you want cloths or shoes";
            cin>>p;
            
            if(p=="cloths"){
                cout<<"2000";
            }
        
            else if (p=="shoes"){
                cout<<"1000";
            }

        }

        else if(p=="Service"){
            cout<<"Not Available";
        }



    }

        
}
    


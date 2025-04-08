#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number as your starting point";
    cin>>num;

    
    if(num==1){
        cout<<"Enter a number as your next destination";
        cin>>num;

        if(num==2){
            cout<<"enter a number as your next destination";
            cin>>num; 
            
             if (num==3){
                cout<<"enter a number as your next destination";
                cin>>num;

                if(num==4){cout<<"Reached";}

                else{cout<<"Invalid";}

            }
            else if(num==4){
                cout<<"you have reachedout your destination";
                
            }
            else{
                cout<<"Invalid";
            }
        }

        else if(num==3){
            cout<<"Enter a number as your next destination";
            cin>>num;

            if(num==2){
                cout<<"enter a number as your next destination";
                cin>>num;
                
                if(num==4){cout<<"Reached";}
                
                else{cout<<"Invalid";}
            }

            else if (num==4){
                cout<<"you reached out your destination";
            }

            else{
                cout<<"Invalid";
            }
        }
        
        else if(num==4){
            cout<<"you reached out your destination";
        }

        else{
            cout<<"Invalid Input";
        }

        
    }

    else{
        cout<<"invalid";
    }
}
        

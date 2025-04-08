#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"enter your marks :";
    cin>>marks;
    if(marks>=80 && marks<=90){
        cout<<"A";
    }
    
    else if(marks>=60 && marks<=79){
        cout<<"B";

    }

    else if(marks>=40 && marks<=59){
        cout<<"C";

    }

    else if (marks>=0 && marks<=40){
        cout<<"D";
    }

    else{
        cout<<"Invalid marks";
    }
    
    

}
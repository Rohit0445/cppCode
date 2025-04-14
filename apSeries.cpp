//AP  series 
//a+(n-1)*d
//a=starting point
//n=number of terms
//d=difference






#include <iostream>
using namespace std;

int main(){
    int a, n,d;
    int ans;
    cout<<"Enter your first term and nth term , difference or series";
    cin>>a>>n>>d;

    for (int i = 0; i < n; i++)
    {
        ans=a+i*d;
        cout<<ans<<"\t";
    }
    

}
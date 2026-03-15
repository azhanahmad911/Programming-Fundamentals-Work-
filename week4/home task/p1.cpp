#include<iostream>
using namespace std;
main(){
    cout<<"Enter the name of the country:";
    string cname;
    cin>>cname;

    cout<<"Enter the ticket price:";
    int tp;
    cin>>tp;

    int tpad;

    if(cname=="Ireland")
    {
        tpad=tp*0.90;
    }
    else
    {
        tpad=tp*0.95;
    }

    cout<<"Total price after discount is: "<<tpad;
    
}
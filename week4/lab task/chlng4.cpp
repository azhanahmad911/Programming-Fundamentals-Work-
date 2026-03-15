#include<iostream>
using namespace std;
main(){
    cout<<"Enter the Password:";
    string pass;
    cin>>pass;

    string mypass;
    mypass="qwerty";

    if(pass==mypass)
    {
        cout<<"Wow! You've cracked the code";
    }
    else
    {
        cout<<"It's not that simple, try again";
    }
}
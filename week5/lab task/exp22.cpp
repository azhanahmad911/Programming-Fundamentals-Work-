#include<iostream>
using namespace std;
main(){

    cout<<"Enter a number: ";
    int num;
    cin>>num;

    while(num<=0)
    {
        cout<<"Please enter a positive value: ";
        cin>>num;

    }
    cout<<"Program ends";

}
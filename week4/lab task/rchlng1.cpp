#include<iostream>
using namespace std;
main (){
    cout<<"Enter your bill:";
    int bill;
    cin>>bill;

    int billaftdis;
    int tbill;

    if(bill<5000)
    {
billaftdis=bill*0.05;
    }
    else
    {
        billaftdis=bill*0.10;
    }
    tbill=bill-billaftdis;
    cout<<"Your discounted bill is: "<<tbill;
}
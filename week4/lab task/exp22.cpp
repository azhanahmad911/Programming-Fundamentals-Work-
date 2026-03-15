#include<iostream>
using namespace std;
main(){

    cout<<"Are your friends going? (Press Y for yes):";
    char enter;
    cin>>enter;

    if(enter=='y')
    {
        cout<<"Your are also going!";
    }
    else
    {
        cout<<"Your are not going!";
    }
}
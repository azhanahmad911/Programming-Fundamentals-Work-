#include<iostream>
using namespace std;
main(){

    char enter='y'; 
    
    while(enter=='y')
    {
        cout<<"I'm happy"<<endl;
        cout<<"Press y to continue or any key to exit: ";
        cin>>enter;
    }
}
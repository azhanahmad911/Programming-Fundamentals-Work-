#include<iostream>
using namespace std;
main()
{
    char choice='y';

    while(choice!='n'   && choice!='N')
    {
        cout<<"I'm happy!"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
    }
}
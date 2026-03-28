#include<iostream>
using namespace std;
main(){

    char string[100];

    cout<<"Enter a string: ";
    cin>>string;

    int length=0; 

    for(; string[length] != '\0'; length++ ){
    }

    cout<<"Reversed String: ";

    for(int i=length - 1; i>=0; i--){
        cout<<string[i];
    }

}
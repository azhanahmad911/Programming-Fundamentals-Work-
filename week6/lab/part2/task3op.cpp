#include<iostream>
using namespace std;
main(){


    char str[100];

    cout<<"Enter a string: ";
    cin>>str;

    int i=0;

    while(str[i] != '\0'){
        if(str[i]== 'z'){
            str[i]='a';
        }
        else
        {
            str[i]= str[i]+1;
        }
        i++;
    }

    cout<<"Output: "<<str<<endl;

}
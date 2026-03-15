#include<iostream>
using namespace std;
main(){
    cout<<"Enter any character in lower case: ";
    char ch;
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"It is a Vowel";
    }
    else if(ch=='c' || ch=='b' || ch=='d' || ch=='f' || ch=='g' || ch=='h' || ch=='j' || ch=='k' || ch=='l' || ch=='m' || ch=='n' || ch=='p' || ch=='q' || ch=='r' || ch=='s' || ch=='t' || ch=='v' || ch=='w' || ch=='x' || ch=='y' || ch=='z')
    {
        cout<<"It is a consonant";
    }
    else{
        cout<<"It is a Number";
    }

}
#include<iostream>
using namespace std;

main(){

cout<<"Enter name of 1st brother: ";
string b1;
cin>>b1;

cout<<"Enter age of first brother: ";
int a1;
cin>>a1;

cout<<"Enter name of 2nd brother: ";
string b2;
cin>>b2;

cout<<"Enter the age of second brother: ";
int a2;
cin>>a2;

cout<<"Enter the name of 3rd brother: ";
string b3;
cin>>b3;

cout<<"Enter the age of third brother: ";
int a3;
cin>>a3;

if(a1<a2 && a1<a3)
{
    cout<<"The younger on is: "<<b1;
}
else if(a2<a1 && a2<a3)
{
    cout<<"The youngest one is: "<<b2;
}
else if(a3<a1 && a3<a2)
{
    cout<<"The youngest one is: "<<b3;
}

}
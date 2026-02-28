#include<iostream>
using namespace std;

main(){

cout<<"Enter age:";
int age;
cin>>age;

cout<<"Enter moves:";
int moves;
cin>>moves;

int avgyrs;
avgyrs = age / (moves+1);

cout<<" Average years = "<<avgyrs;

}
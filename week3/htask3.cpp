#include<iostream>
using namespace std;

main(){

cout<<" Enter initial velocity (m/s) :";
int iv;
cin>>iv;

cout<<" Enter acceleration (m/s^2) :";
int acc;
cin>>acc;

cout<<" Enter time (s):";
int tm;
cin>>tm;

int fv;
fv = tm * acc + iv;

cout<<" Final Velocity (m/s): "<<fv;

}
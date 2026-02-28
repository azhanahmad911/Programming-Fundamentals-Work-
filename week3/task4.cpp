#include<iostream>
using namespace std;

main(){

cout<<" Enter the charge (Q) in Coulombs:";
float charge;
cin>>charge;

cout<<" Enter the time (T) in seconds:";
float time;
cin>>time;

float Current;
Current = charge / time;

cout<<" The current (I) is ="<< Current<<"Amperes";

}
#include<iostream>
using namespace std;

main(){

cout<<" Enter Voltage (in volts):";
float voltage;
cin>>voltage;

cout<<" Enter Current (in amperes):";
float current;
cin>>current;

float Power;
Power = voltage*current;

cout<<" The Power is "<<Power<<" watts";

}
#include<iostream>
using namespace std;

main(){

cout<<" Enter the current world population:";
int cpop;
cin>>cpop;

cout<<" Enter the monthly birth rate (number of births per month):";
int brm;
cin>>brm;

int tpop;
tpop= cpop+brm*360;

cout<<" The population in three decades will be: "<<tpop;

}
#include<iostream>
using namespace std;

main(){

cout<<" Enter the country's name:";
string cname;
cin>>cname;

cout<<" Enter the number of wins:";
int nwins;
cin>>nwins;

cout<<" Enter the number of draws:";
int ndraws;
cin>>ndraws;

cout<<" Enter the number of losses:";
int nlosses;
cin>>nlosses;

int twinp;
twinp=nwins*3;

int total;
total = twinp+ndraws+nlosses*0;

cout<<cname<<" has obtained "<<total<<" points in Asia Cup Tournament";

}
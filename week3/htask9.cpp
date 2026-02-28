#include<iostream>
using namespace std;

main(){

cout<<" Enter a four digit number:";
int fdn;
cin>>fdn;


int d1, d2,  d3, d4;

d1 = fdn % 10;
fdn = fdn / 10;

d2 = fdn % 10;
fdn = fdn / 10;

d3 = fdn % 10;
fdn = fdn / 10;

d4 = fdn % 10;
fdn = fdn / 10;

int d;
d = d1 + d2 + d3 + d4;

cout<<" The sum of individual digits is: "<<d;

}
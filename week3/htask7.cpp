#include<iostream>
using namespace std;

main(){

cout<<" Enter the movie name:";
string mname;
cin>>mname;

cout<<" Enter the adult ticket price:";
int atp;
cin>>atp;

cout<<" Enter the child ticket price:";
int ctp;
cin>>ctp;

cout<<" Enter the number of adult tickets sold:";
int ats;
cin>>ats;

cout<<" Enter the number of child tickets sold:";
int cts;
cin>>cts;

cout<<" Enter the percentage of the amount to be donated to charity:";
float pac;
cin>>pac;

int tm;
tm = (atp * ats) + (ctp * cts);

float pc;
pc = tm * (pac/100);

int tml;
tml = tm - pc;

cout<<" Movie: "<<mname<<endl;
cout<<" Total amount generated from ticket sales: "<<tm<<endl;
cout<<" Donation to charity ("<<pac<<"%): "<<pc<<endl;
cout<<" Remaining amount after donation: "<<tml;

}
#include<iostream>
using namespace std;

main(){

cout<<" Enter the student's name:";
string name;
cin>>name;

cout<<" Enter matriculation marks (out of 1100):";
int matricmarks;
cin>>matricmarks;

cout<<" Enter intermediate marks (out of 550):";
int intermarks;
cin>>intermarks;

cout<<" Enter ECAT Marks (out of 400):";
int ecatmarks;
cin>>ecatmarks;

float mm;
float im;
int em;

mm = matricmarks * 10/1100;
im = intermarks * 40/550;
em = ecatmarks * 50/400;

int total;
total = mm + im + em;

cout<<" Aggregate score for "<<name<<" is "<<total<<"%";

}
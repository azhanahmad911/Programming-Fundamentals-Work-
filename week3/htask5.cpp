#include<iostream>
using namespace std;

main(){

cout<<" Enter the name of the person:";
string name;
cin>>name;

cout<<" Enter the target weight loss in kilograms:";
float wkg;
cin>>wkg;

float td;
td =  wkg * 15;

cout<< name<<" will need "<<td<<" days to lose "<<wkg<<" kg of weight by following the doctor's suggestions";

}
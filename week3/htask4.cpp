#include<iostream>
using namespace std;

main(){

cout<<" Enter Imposter Count:";
int imp;
cin>>imp;

cout<<" Enter Player Count:";
int ply;
cin>>ply;

int chance;
chance= 100 *  imp / ply ;

cout<<" Chance of being an Imposter = "<<chance<<" %";

}
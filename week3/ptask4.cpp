#include<iostream>
using namespace std;

main(){

cout<<" Enter imposters:";
float imp;
cin>>imp;

cout<<" Enter players:";
float ply;
cin>>ply;

float chance;
chance= 100 * ( imp / ply );

cout<<" Chance = "<<chance<<" %";

}
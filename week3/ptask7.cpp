#include<iostream>
using namespace std;

main(){

cout<<" Enter paint area:";
int pa;
cin>>pa;

cout<<" Enter width:";
int w;
cin>>w;

cout<<" Enter length:";
int lg;
cin>>lg;

int wp;
wp = pa / ( w * lg);

cout<<" Walls Painted = "<<wp;

}
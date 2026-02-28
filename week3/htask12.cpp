#include<iostream>
using namespace std;

main(){

cout<<" Number of square meters you can paint:";
int pa;
cin>>pa;

cout<<" Width of single wall (in meters):";
int w;
cin>>w;

cout<<" Length of single wall (in meters):";
int lg;
cin>>lg;

int wp;
wp = pa / ( w * lg);

cout<<" Number of Walls you can Paint = "<<wp;

}
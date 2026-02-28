#include<iostream>
using namespace std;

main(){

cout<<" Number of minutes:";
int m;
cin>>m;

cout<<" Frames per second:";
int fps;
cin>>fps;

int tf;
tf = m * 60 * fps;

cout<<" Total number of frames : "<<tf;

}
#include<iostream>
using namespace std;

main(){

cout<<" Enter minutes:";
int m;
cin>>m;

cout<<"Enter fps:";
int fps;
cin>>fps;

int tf;
tf = m * 60 * fps;

cout<<" Total frames = "<<tf;

}
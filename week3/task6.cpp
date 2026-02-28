#include<iostream>
using namespace std;

main(){

cout<<" Enter the size in megabytes (MB):";
float mb;
cin>>mb;

float total;
total = mb*1024*1024*8;

cout<<" mb"<< " is equivalent to "<<total<<"bits";

}
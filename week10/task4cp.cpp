#include<iostream>
#include<cmath>
using namespace std;

float height, distance;


main(){

    float dis, ang;

    cout<<"Enter distance from the base of tree (in feet): ";
    cin>>dis;

    cout<<"Enter angle of elevation (in degrees): ";
    cin>>ang;


    cout<<"The height of tree is: "<<dis*(tan((ang)/57.2958));
}
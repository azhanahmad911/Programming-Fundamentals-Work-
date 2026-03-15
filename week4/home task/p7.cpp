#include<iostream>
using namespace std;
main(){
    cout<<"Enter the name of figure: ";
    string fig;
    cin>>fig;

    float area;

    if(fig=="square"){
        cout<<"Enter length of Side: ";
        float side;
        cin>>side;

        area=side*side;
    }
    else if(fig=="rectangle"){
        cout<<"Enter the length of rectangle: ";
        float length;
        cin>>length;

        cout<<"Enter the width of rectangle: ";
        float width;
        cin>>width;

        area=length*width;
    }
    else if(fig=="circle"){
        cout<<"Enter the radius of the cirle: ";
        float radius;
        cin>>radius;

        area=3.14 * (radius*radius);
    }
    else if(fig=="triangle"){
        cout<<"Enter the length of base: ";
        float base;
        cin>>base;

        cout<<"Enter the length of height: ";
        float height;
        cin>>height;

        area= (base * height)/2;
    }
    cout<<"Area is: "<<area;
}
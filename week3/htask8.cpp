#include<iostream>
using namespace std;

main(){

cout<<" Enter vegetable price per kilogram (in coins):";
float vp;
cin>>vp;

cout<<" Enter fruit price per kilogram (in coins):";
float fp;
cin>>fp;

cout<<" Enter total kilograms of vegetables:";
int kv;
cin>>kv;

cout<<" Enter total kilograms of fruit:";
int kf;
cin>>kf;

float total;
total = (vp * kv) + (fp * kf);

float inrs;
inrs = total / 1.94;

cout<<" Total earning in rupees (Rps): "<<inrs;

}
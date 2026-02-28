#include<iostream>
using namespace std;

main(){

cout<<" Enter size of fertilizer bag in pounds:";
float bags;
cin>>bags;

cout<<" Enter the cost of the bag:";
float cbag;
cin>>cbag;

cout<<" Enter the area in square feet that can be covered by the bag:";
float area;
cin>>area;

float cfpp;
cfpp = cbag / bags;

float cpsf;
cpsf = cbag / area;

cout<<" Cost of fertilizer per pound is: "<<cfpp<<endl;
cout<<" Cost of fertilizing per square foot is: "<<cpsf;

} 
#include<iostream>
using namespace std;
main(){

    int a, b;
    int hcf; 

    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }

    int lcm=(a*b)/ hcf;

    cout<<"HCF of "<<a<<" and "<<b<<" is "<<hcf<<endl<<"LCM of "<<a<<" and "<<b<<" is "<<lcm;
}
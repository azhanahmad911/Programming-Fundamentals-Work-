#include<iostream>
using namespace std;
main(){
    cout<<endl;
    int table=24;
    cout<<"Multiplication table of 24"<<endl;
    for(int i=1; i<=10; i=i+1)
    {
        int multiple=table*i;
        cout<<table<<" * "<<i<<" = "<<multiple<<endl;
    }
cout<<endl;
    int table2=50;
    cout<<"Multiplication table of 50"<<endl;
    for(int i=1; i<=10; i=i+1)
    {
        int multiple=table2*i;
        cout<<table2<<" * "<<i<<" = "<<multiple<<endl;
    }

    cout<<endl;
    int table3=29;
    cout<<"Multiplication table of 29"<<endl;
    for(int i=1; i<=10; i=i+1)
    {
        int multiple=table3*i;
        cout<<table3<<" * "<<i<<" = "<<multiple<<endl;
    } 
}
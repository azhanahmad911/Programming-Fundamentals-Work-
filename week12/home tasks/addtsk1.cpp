#include<iostream>
using namespace std;
main(){

    int a=10;
    int b=20;

    int *p;

    p=&a;
    b=*p;
    b=a;

    cout<<a<<endl<<b;

    return 0;

}

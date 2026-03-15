#include<iostream>
using namespace std;
main(){

    cout<<"Enter the number of Holidays: ";
    int holidays;
    cin>>holidays;

    int workingdays;
    workingdays=365-holidays;

    int ptwd;
    ptwd=workingdays *63;

    int pthd;
    pthd=holidays*127;

    int ttfg;
    ttfg=ptwd+pthd;

    if(ttfg>30000){
        cout<<"Tom's gonna run away "<<endl;

        if(ttfg>30000){
        int intohours = (ttfg-30000)/60;
        cout<<intohours<<" Hours more for Play ";
        }
    }
    else if(ttfg<30000)
    {
        cout<<"Tom's gonna sleep well "<<endl;
        int intohourss=(30000-ttfg)/60;
        cout<<intohourss<<" hours less for play";
    }
}
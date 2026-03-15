#include<iostream>
using namespace std;
main(){
    cout<<"Enter the number of Red Roses: ";
    int rr;
    cin>>rr;

    cout<<"Enter the number of White Roses: ";
    int wr;
    cin>>wr;

    cout<<"Enter the number of Tulips: ";
    int tulips;
    cin>>tulips;
    
    float rrp, wrp, tp;
    rrp=rr*2;
    wrp=wr*4.10;
    tp=tulips*2.50;

    float stotal;
    stotal=rrp+wrp+tp;

    float ftotal;

    if(stotal>200){
        ftotal=stotal*0.80;
        cout<<"Original Price: "<<stotal<<endl;
        cout<<"Discounted Price: "<<ftotal<<endl;
    }
    else{
        cout<<"Price: "<<stotal;
    }

}
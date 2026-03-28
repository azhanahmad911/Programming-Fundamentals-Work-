#include<iostream>
using namespace std;
main(){

    string arr[5]; 
    cout<<"Enter Name of 5 Students: "<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i]; 
    }

    cout<<"Student Names are: "<<endl;
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl<<arr[4]<<endl;

}
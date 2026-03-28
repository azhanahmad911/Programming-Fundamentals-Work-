#include<iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>n;

    float arr[n];
    cout<<"Enter the resistance values (in ohms) of the "<<n<<" resistors, one per line :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    float total=0;

    for(int i=0; i<n; i++){
        total=total+arr[i];
    }

    cout<<"The total resistance of series circuit is: "<<total<<" ohms ";

}
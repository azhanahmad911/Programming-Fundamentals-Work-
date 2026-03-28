#include<iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    int smallest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }


    cout<<"The largest number is: "<<largest<<endl;
    cout<<"The smallest number is: "<<smallest<<endl;
}
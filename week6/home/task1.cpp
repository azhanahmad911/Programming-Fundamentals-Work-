#include<iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter the number of elements: ";
    cin>>n; 

    int sum; 
    int arr[n];
    cout<<"Enter "<<n<<" number, one per line: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<"Sum of all elements is: "<<sum;

}
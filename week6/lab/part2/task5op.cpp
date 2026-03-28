#include<iostream>
using namespace std;
main(){

    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    if(n<0){
        cout<<"Invalid input. Number of elements must be greater than 0."<<endl;
    }

    int arr[n];
    cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    

        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
                cout<<"Already entered: "<<arr[i];
                break;
            }
        }
    }

}
#include<iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter the number of elements: ";
    cin>>n; 

    int arr[n];
    int total;
    cout<<"Enter "<<n<<" numbers, one per line: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        if(arr[i]%2==0){
            total=total+1;
        }
    }

    cout<<"Total Even Numbers are: "<<total;
}
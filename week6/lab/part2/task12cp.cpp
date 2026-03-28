#include<iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter the number of elements you want to print: ";
    cin>>n; 

    int arr[n];
    cout<<"Enter "<<n<<" elements, one per line "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool ischeck=true;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(arr[i] % 2 != 0){
                ischeck=false; 
                break;
            }
        }
    
    else{
    if(arr[i] % 2 == 0){
        ischeck = false;
        break;
    }
    }
}
    if(ischeck){
        cout<<"This array is special";
    }
    else{
        cout<<"This array isn't special";
    }

}
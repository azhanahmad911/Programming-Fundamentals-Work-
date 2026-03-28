#include <iostream>
using namespace std;
main(){

    int first[2];
    cout<<"Enter 2 numbers for the first array: "<<endl;
    cin>>first[0] >> first[1];

    int sizeSecond;
    cout<<"Enter the number of elements for the second array: ";
    cin>>sizeSecond;

    int second[sizeSecond];
    cout<<"Enter "<<sizeSecond<<" numbers for the second array: "<<endl;
    for(int i=0; i<sizeSecond; i++){
        cin>>second[i];
    }

    int result[2 + sizeSecond];
    result[0] = first[0];

    for(int i=0; i<sizeSecond; i++){
        result[i + 1]=second[i];
    }

    result[sizeSecond+1]=first[1];

    cout<<"Resulting array: [";
    for(int i = 0; i < 2 + sizeSecond; i++){
        cout << result[i];
        if(i != 2 + sizeSecond - 1) cout << ", ";
    }
    cout << "]";

}
#include<iostream>
using namespace std;
main(){

    int count;
    cout << "Enter the number of customers: ";
    cin >> count;

    if(count<=0){
        cout<<"Invalid input.Number of elements must be greater than 0." << endl;
    }

    string name[count];
    cout<<"Enter the Name of "<<count<<" customers: " << endl;
    for (int i = 0; i < count; i++){
        cin>>name[i];
    }

    char letter;
    int total=0;

    cout<<"Enter a letter to check: ";
    cin>>letter;
    for (int i = 0; i < count; i++)
    {
       if (name[i][0] == letter)
       {
        total++;
       }
       
    }
    cout<<"Total names starting with '"<<letter<<"': "<<total<<endl;

}
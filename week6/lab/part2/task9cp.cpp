#include<iostream>
using namespace std;
main(){

    float bill; 
    cout<<"Enter total payable amount: ";
    cin>>bill;

    int coins[4];
    cout<<"Enter number of quarters, dimes, nickels and pennys: ";
    for(int i=0; i<4; i++){
        cin>>coins[i];
    }

    float worth[4]={0.25, 0.10, 0.05, 0.01};

    float total=0; 

    for(int i=0; i<4; i++){
        total=total+coins[i]*worth[i]; 
    }

    if(total>=bill){
        cout<<"Can you pay the amount? Yes ";
    }

    else{
        cout<<"Can you pay the amount? No ";
    }
}
#include<iostream>
using namespace std;
main(){

    int sum=0; 
    float avg=0;

    int numbers[5]= {1, 2, 3, 4, 5};

    for(int i=0; i<5; i++)
    {
        sum=sum+numbers[i];
    }
    avg=sum/5;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Avg: "<<avg<<endl;

}
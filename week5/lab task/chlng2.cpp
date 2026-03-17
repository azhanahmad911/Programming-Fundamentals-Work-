#include<iostream> 
using namespace std;
main(){
    cout<<"Enter a number: ";
     int num; 
     cin>>num;

     cout<<"Enter digit: ";
     int digit;
     cin>>digit;

     int count=0;

    for(; num>0; num=num/10)
    {
        int last= num%10; 

        if (last == digit)
        {
            count=count+1;
        }
    }
    cout<<count;
}
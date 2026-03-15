#include<iostream>
using namespace std;
main(){
    cout<<"Enter you monthly salary: ";
    int salary;
    cin>>salary;
     
    cout<<"Enter laptop price:";
    int laptopprice;
    cin>>laptopprice;
    
    cout<<"Enter advance months: ";
    int months;
    cin>>months;

    int advsalary=salary*0.5;
    int tadv=advsalary*months;

    int reqmon;
    reqmon=laptopprice/advsalary;

   if(tadv>=laptopprice)
  {
     cout<<"You can buy the laptop";
  }
  else
  {
  cout<<"Months required to buy laptop: "<<reqmon;
  }

}
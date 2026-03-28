#include<iostream>
using namespace std;
main(){

    char ogtext[200];
    char aftchng[200];

    int j=0; 

    cout<<"Enter a string: ";
    cin.getline(ogtext, 200);

    for(int i=0; ogtext[i] != '\0'; i++){
        char currentch=ogtext[i]; 

        if(currentch != 'a' && currentch != 'e' && currentch != 'i' && currentch != 'o' && currentch != 'u' && currentch != 'A' && currentch != 'E' && currentch != 'I' && currentch != 'O' && currentch != 'U'){
            aftchng[j]=currentch;
            j++;
        }
    }

    aftchng[j] = '\0';

    cout<<"String without vowels: "<<aftchng;

}
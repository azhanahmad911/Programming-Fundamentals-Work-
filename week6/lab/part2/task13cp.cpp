#include <iostream>
using namespace std;
main(){

    int n; 
    cout<<"Enter number of chords: ";
    cin>>n;

    string chords[n];
    cout<<"Enter chords, one per line: "<<endl;
    for(int i=0; i<n; i++){
        cin>>chords[i];
    }

    for (int i = 0; i < 3; i++) {

        string word = chords[i]; 
        int j = 0;

       
        while (word[j] != '\0') {
            j++;
        }

        if (word[j - 1] != '7') {
            chords[i] = word + "7";
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << chords[i] << " ";
    }

}
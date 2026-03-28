#include<iostream>
using namespace std;
main(){

    string Username = "admin"; 
    int Password = 1234;

    int pass[3];
    string usnm[3]; 

    string name[3];
     int age[3];

    string course[3];

    bool login = false;

    for(int i=0; i<3; i++){

        cout<<"Enter username: ";
        cin>>usnm[i];

        cout<<"Enter password: ";
        cin>>pass[i];

        if(usnm[i] == Username && pass[i] == Password){
            cout<<"Login Successful!"<<endl;
            login = true;
            break;
        }

    }
    if(login==true){

        while(true){

            cout<<"1---> Add Student"<<endl;
            cout<<"2---> View Student"<<endl;
            cout<<"3---> Add course"<<endl;
            cout<<"4---> View Course"<<endl;
            cout<<"5---> Exit"<<endl;

            cout<<"Enter your choice: ";
            int choice;
            cin>>choice;

            if(choice == 1){
                    
                for(int i=0; i<3; i++){

                cout<<"Enter Student Name: ";
                cin>>name[i];

                cout<<"Enter Student's Age: ";
                cin>>age[i];

                cout<<"Student Added Successfully."<<endl;

                }
            }

            if(choice == 2){

                for(int i=0; i<3; i++){
                cout<<name[i]<<" "<<age[i]<<endl;
                }
            }

            if(choice == 3){

                for(int i=0; i<3; i++){

                cout<<"Enter Course: "<<endl;
                cin>>course[i];
                }

            }

            if(choice == 4){

                for(int i=0; i<3; i++){

                cout<<course[i]<<endl;

                }
            }

            if(choice == 5){
                cout<<"Ended.";
                break;
            }


        }

    }

}
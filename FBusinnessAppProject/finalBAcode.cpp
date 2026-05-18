#include<iostream>
#include<fstream>
using namespace std;

void addItems(int &howmanyitems, string itemname[], string itembrand[], string itemprice[], string itemquantity[]);
void showNewArrivals(int howmanyitems, string itemname[], string itembrand[], string itemprice[], string itemquantity[]);

main()

{

   int howmanyitems = 0;
   string itemname[100];
   string itemprice[100];
   string itemquantity[100];
   string itembrand[100];

   fstream dataFile; 
   dataFile.open("inventory.txt", ios::in); 
   
   if(dataFile){

       while (dataFile >> itemname[howmanyitems] >> itembrand[howmanyitems] >> itemprice[howmanyitems] >> itemquantity[howmanyitems]) 

            {
               howmanyitems++;
            }

       dataFile.close(); 
   }

   
 while(true){
 

   cout<<endl;
   cout<<"----------------Welcome to SellnBuy----------------"<<endl;   
   cout<<"         Your simple and smart marketplace         "<<endl;
   cout<<"      for buying and selling anything, anytime.    "<<endl<<endl;

   // LOGIN PAGE  

   cout<<"                  SellnBuy Login        "<<endl;
   cout<<"                  Buyer or Seller?      "<<endl;
   string login;
   cin >> login;
   cout<<endl;

   // LOGIN CREDENTIALS PAGE 

   string email;
   int password;

   for(int i=0; i<3; i++){

      cout<<"               Please Enter your Email        "<<endl;
      
      cin >> email;
      cout<<"                   Enter Password             "<<endl;
      
      cin >> password;
      cout<<endl;


         if(email == "vscodeproject@gmail.com" && password == 911){
            cout<<" Login Successful !!!"<<endl<<endl;
            break;
         }

         else{
            cout<<"         Wrong Password or Email, Try Again. "<<endl;
         }

   }

   if(email != "vscodeproject@gmail.com" || password != 911){
            break;
         }

         //BUYER'S INTERFACE 

         if(login=="Buyer" || login=="buyer"){

            cout<<" What are you searching for? -- Select Category:"<<endl;
            cout<<" 1. Automotive           "<<endl;
            cout<<" 2. Clothing             "<<endl;
            cout<<" 3. Mobile & Accessories "<<endl;
            cout<<" 4. Home and Garden      "<<endl;
            cout<<" 5. New Arrivals         "<<endl;
            cout<<" 6. Exit "<<endl<<endl;

            cout<<" Select any Option: "<<endl;
            int buyeroption;
            cin >> buyeroption;

            if(buyeroption == 1){

               cout<<" Available Car Brands: "<<endl<<endl;
               cout<<" 1. Honda              "<<endl;
               cout<<" 2. BMW                "<<endl;
               cout<<" 3. Mercedes           "<<endl;
               cout<<" 4. Mclaren            "<<endl;
               cout<<" 5. Corvette           "<<endl;

               cout<<endl<<" Please Select any Car Brand: ";
               int caroption;
               cin >> caroption;

               cout<<endl<<"Available Models: "<<endl<<endl;

               if(caroption == 1){
                  cout<<"1. Honda City "<<endl;
                  cout<<"2. Honda Civic "<<endl;
                  cout<<"3. Honda Accord "<<endl;

                  cout<<endl<<" Enter Car Model you want to purchase: "<<endl;
                  int carmodel;
                  cin >> carmodel;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else if(caroption == 2){
                  cout<<"1. Bmw m4 Competition"<<endl;
                  cout<<"2. Bmw m5 cs"<<endl;
                  cout<<"3. Bmw m5 Competition";

                  cout<<" Enter Car Model you want to purchase: "<<endl;
                  int carmodel;
                  cin >> carmodel;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else if(caroption == 3){
                  cout<<"1. Mercedes-AMG C63"<<endl;
                  cout<<"2. Mercedes-AMG E63"<<endl;
                  cout<<"3. Mercedes-AMG G63"<<endl; 
                  
                  cout<<" Enter Car Model you want to purchase: "<<endl;
                  int carmodel;
                  cin >> carmodel;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else if(caroption == 4){
                  cout<<"1. McLaren 720S"<<endl;
                  cout<<"2. McLaren P1"<<endl;
                  cout<<"3. McLaren 765LT"<<endl;

                  cout<<" Enter Car Model you want to purchase: "<<endl;
                  int carmodel;
                  cin >> carmodel;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else if(caroption == 5){
                  cout<<"1. Chevrolet Corvette C8 Stingray"<<endl;
                  cout<<"2. Chevrolet Corvette ZR1"<<endl;
                  cout<<"3. Chevrolet Corvette Z06 (C8)"<<endl;

                  cout<<endl<<" Enter Car Model you want to purchase: "<<endl;
                  int carmodel;
                  cin >> carmodel;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else{
                  cout<<"Invalid Input"<<endl; 
               }

            }

            else if(buyeroption == 2){

               cout<<endl<<" Men or Women "<<endl<<endl;
               string clothoption;
               cin >> clothoption;

               if(clothoption == "Men" || clothoption == "men"){
                  cout<<"1. Suits"<<endl;
                  cout<<"2. T Shirts"<<endl;
                  cout<<"3. Jeans"<<endl;

                  cout<<endl<<"Enter any Option: "<<endl<<endl;
                  int menoption;
                  cin >> menoption;

                  if(menoption == 1 || menoption == 2 || menoption == 3){
                     cout<<endl<<" Please select any colour: "<<endl;
                     cout<<"1. Black "<<endl;
                     cout<<"2. Blue  "<<endl;
                     cout<<"3. Bottle Green "<<endl;

                     int colouroption;
                     cin >> colouroption;

                     if(colouroption == 1 || colouroption == 2 || colouroption == 3){
                        cout<<"Order Placed Successfully!";
                     }

                     else{
                        cout<<"Invalid Input";
                     }
                  }
               }

               else if(clothoption == "Women" || clothoption == "women"){
                  cout<<"1. Tops & Tunics"<<endl;
                  cout<<"2. Bottoms (Jeans, Trousers, Skirts)"<<endl;
                  cout<<"3. Hoodies & Jackets"<<endl;

                  cout<<endl<<"Please Choose an Option:"<<endl<<endl;
                  int womenoption;
                  cin >> womenoption;

                  if(womenoption == 1){
                     cout<<"1. Cotton Basic T-Shirt"<<endl;
                     cout<<"2. Embroidered Lawn Top"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int womenitem;
                     cin >> womenitem;

                     cout<<" Order Placed Successfully!"<<endl;
                  }

                  else if(womenoption == 2){
                     cout<<"1. Blue baggy Jeans"<<endl;
                     cout<<"2. Black Straight Trousers"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int womenitem;
                     cin >> womenitem;

                     cout<<" Order Placed Successfully!"<<endl;
                  }

                  else if(womenoption == 3){
                     cout<<"1. Peach Oversized Hoodie"<<endl;
                     cout<<"2. Casual Denim Jacket"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int womenitem;
                     cin >> womenitem;

                     cout<<" Order Placed Successfully!"<<endl;
                  }

                  else{
                     cout<<"Invalid Input";
                  }
               }

               else{
                  cout<<"Invalid Input";
               }

            }

            // MOBILES AND ACCESSORIES 
            else if(buyeroption == 3){

               cout<<endl<<"1. Mobile Phones"<<endl;
               cout<<"2. Headsets"<<endl;
               cout<<"3. Chargers"<<endl;
               cout<<"4. Cases"<<endl;

               cout<<endl<<"Choose Option: "<<endl;
               int mobileoption;
               cin >> mobileoption;

               if(mobileoption == 1){
                  cout<<"Select any Brand"<<endl<<endl;
                  cout<<"1. Apple"<<endl;
                  cout<<"2. Samsung"<<endl;
                  cout<<"3. One Plus+"<<endl;

                  int selectbrand;
                  cin >> selectbrand;

                  cout<<"Available Models:"<<endl<<endl;

                  if(selectbrand == 1){
                     cout<<"1. Iphone 17"<<endl;
                     cout<<"2. Iphone 17 pro"<<endl;
                     cout<<"3. Iphone 17 Pro Max"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int iphone;
                     cin >> iphone;

                     cout<<" Order Placed Successfully!"<<endl;
                  }

                  else if(selectbrand == 2){
                     cout<<"1. Samsung s24 ultra"<<endl;
                     cout<<"2. Samsung a53 5g"<<endl;
                     cout<<"3. Samsung foldable"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int samsung;
                     cin >> samsung;

                     cout<<" Order Placed Successfully!"<<endl;

                  }

                  else if(selectbrand == 3){
                     cout<<"1. OnePlus 13"<<endl;
                     cout<<"2. OnePlus Nord 6"<<endl;
                     cout<<"3. OnePlus 13R"<<endl;

                     cout<<endl<<" Enter Item you want to purchase: "<<endl;
                     int oneplus;
                     cin >> oneplus;

                     cout<<" Order Placed Successfully!"<<endl;
                  }

                  else{
                     cout<<"Invalid Input"<<endl;
                  }
               }

               else if(mobileoption == 2){
                  cout<<"Available Headsets:"<<endl<<endl;
                  cout<<"1. Apple"<<endl;
                  cout<<"2. Audionic"<<endl;
                  cout<<"3. Sony"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int headset;
                  cin >> headset;

                  cout<<" Order Placed Successfully!"<<endl;

               }

               else if(mobileoption == 3){
                  //charges 
                  cout<<"Charger Type:"<<endl<<endl;
                  cout<<"1. Lightning Cable"<<endl;
                  cout<<"2. Type C"<<endl;
                  cout<<"3. Micro-USB"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int charger;
                  cin >> charger;

                  cout<<" Order Placed Successfully!"<<endl;

               }

               else if(mobileoption == 4){
                  //cases 
                  cout<<"Available Cases:"<<endl<<endl;
                  cout<<"1. Silicone Case"<<endl;
                  cout<<"2. Book Design Case"<<endl;
                  cout<<"3. Transparent Case"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int mcase;
                  cin >> mcase;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else{
                  cout<<"Invalid Option."<<endl;
               }

            }

            // HOME AND GARDEN 
            else if(buyeroption == 4){
               cout<<endl<<"1. Furniture"<<endl;
               cout<<"2. Garden & Outdoor"<<endl;
               cout<<"3. Home Decor"<<endl;

               cout<<endl<<"Select Option: "<<endl;
               int chooseoption;
               cin >> chooseoption;

               if(chooseoption == 1){
                  cout<<endl<<"1. Sofa"<<endl;
                  cout<<"2. Dining Table"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int furniture;
                  cin >> furniture;

                  cout<<" Order Placed Successfully!"<<endl;
               }

               else if(chooseoption == 2){
                  cout<<endl<<"1. Plant Pots"<<endl;
                  cout<<"2. Gardening Tools"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int garden;
                  cin >> garden;

                  cout<<" Order Placed Successfully!"<<endl;

               }

               else if(chooseoption == 3){
                  cout<<endl<<"1. Wall Art"<<endl;
                  cout<<"2. Curtains"<<endl;

                  cout<<endl<<" Enter Item you want to purchase: "<<endl;
                  int wallart;
                  cin >> wallart;

                  cout<<" Order Placed Successfully!"<<endl;

               }

               else{
                  cout<<"Invalid Input"<<endl;
               }

            }

            else if(buyeroption == 5){

                showNewArrivals(howmanyitems, itemname, itembrand, itemprice, itemquantity);
            
            }

            // EXIT 
            else if(buyeroption == 6){
               cout<<"Program Ended."<<endl;
               break;

            }

         }

        

         // SELLER INTERFACE 

         else if(login=="Seller" || login=="seller"){


            cout<<"Seller Menu:"<<endl;
            cout<<" 1. Orders                          "<<endl;
            cout<<" 2. Account Health                  "<<endl;
            cout<<" 3. Feedbacks                       "<<endl;
            cout<<" 4. Listings                        "<<endl;
            cout<<" 5. Returns and Disputes            "<<endl;
            cout<<" 6. Add New Items                   "<<endl;
            cout<<" 7. Exit                            "<<endl<<endl;

            cout<<" Enter any Option: "<<endl;
            int selleroption;
            cin >> selleroption;

            if(selleroption == 1){
               //orders 

               cout<<endl<<"Item Name                           Item Quantity     Order Date      Dispatch Before      SKU"<<endl<<endl;
               cout<<"Men's Cotton T-Shirt (Black)        2 pcs             April 20th      April 25th           McTB101"<<endl;
               cout<<"LED Desk Lamp                       1 pc              March 1st       March 15th           DL987"<<endl;
               cout<<"Football (Standard Size 5)          7 pcs             May 20th        May 22nd             F5001"<<endl<<endl;

            }

            else if(selleroption == 2){
               //account health 

               cout<<endl<<"Account Health : 100%"<<endl<<"Great Service, Keep It Up!"<<endl<<endl;

            }

            else if(selleroption == 3){
               //feedbacks

               cout<<"Product: Sony WH-1000XM4"<<endl;
               cout<<"Noise cancellation is excellent and sound is very clear. A bit pricey, but the comfort makes up for it."<<endl<<endl;
               cout<<"Product: Atomic Habits"<<endl;
               cout<<"Very helpful book! Easy to understand and full of practical advice. I've already started applying the concepts."<<endl<<endl;
               cout<<"Product: iPhone 14"<<endl;
               cout<<"Really smooth performance and the camera quality is amazing. Battery lasts all day with normal use. Totally worth it!"<<endl<<endl;


            }

            else if(selleroption == 4){
               //listings 

               cout<<endl<<"Product Name                       In Stock         Sold       Item Location      Add Cost      SKU       Bundle Discount"<<endl<<endl;
               cout<<"Men's Cotton T-Shirt (Black)       55 pcs           301        United States      5 dollars     McTB101   Buy 3 get 10%"<<endl;
               cout<<"LED Desk Lamp                      15 pcs           97         Turkey             3 dollars     DL987     Buy 2 get 20%"<<endl;
               cout<<"Football (Standard Size 5)         78 pcs           204        Pakistan           10 dollars    F5001     Buy 2 get 5%"<<endl<<endl;


            }

            else if(selleroption == 5){
               //returns and disputes 

               cout<<endl<<"Issue                  Case Id          Buyer Name        Opened On        Due Date"<<endl<<endl;
               cout<<"Item Damged            9863327807       John Doe          April 15th       April 20th"<<endl;
               cout<<"Wrong Size             7672378388       Heisenberg        March 22nd       March 27th"<<endl;
               cout<<"Item Not Received      8738937973       Gus Fring         May 19th         May 24th"<<endl<<endl;

            }

            else if(selleroption == 6){

               
                    addItems(howmanyitems, itemname, itembrand, itemprice, itemquantity);
                    
               
            }

            else if(selleroption == 7){
               //exit

               cout<<"Ending Program."<<endl<<endl;
               break;

            }


         }


         // INVALID INPUT, ENDING 

         else{
    
            cout<<"              Invalid Input!, Try Again.";
            break;

         }


 
 }
}

void addItems(int &howmanyitems, string itemname[], string itembrand[], string itemprice[], string itemquantity[]) {
   int newItemsCount; 
   cout << "Enter Number of New Items to Add: ";
   cin >> newItemsCount;

   fstream dataFile; 
   dataFile.open("inventory.txt", ios::out | ios::app); 

   if(!dataFile){
      cout << "Error accessing database file!" << endl;
      return;
   }

   for(int i = 0; i < newItemsCount; i++){

      cout<<i+1 << ". Enter Item Name (Use underscores instead of spaces): ";
      cin>>itemname[howmanyitems];

      cout<<"Enter Brand Name: ";
      cin>>itembrand[howmanyitems];

      cout<<"Enter Unit Price: ";
      cin>>itemprice[howmanyitems];

      cout<<"Enter Item Quantity: ";
      cin>>itemquantity[howmanyitems];

      dataFile << itemname[howmanyitems] << " " 
               << itembrand[howmanyitems] << " " 
               << itemprice[howmanyitems] << " " 
               << itemquantity[howmanyitems] << endl;
        
       howmanyitems++;
   }

   dataFile.close();
   cout << "Items successfully saved to permanent storage file!" << endl;
}

void showNewArrivals(int howmanyitems, string itemname[], string itembrand[], string itemprice[], string itemquantity[]){
    
   if(howmanyitems == 0) {
      cout << "No New Arrivals, Check Back Later!" << endl;
      return;
    }

    cout << "Item Name\tBrand\tPrice\tQuantity\n";

    for(int i = 0; i < howmanyitems; i++) {
        cout << itemname[i] << "\t"
             << itembrand[i] << "\t"
             << itemprice[i] << "\t"
             << itemquantity[i] << endl;
    }
}
#include <iostream>
using namespace std;

int main () {

    int quant;
    int choice;

    // quntity
    int qrooms = 0, qpasta = 0 , qburger = 0, qnoodles = 0, qshake = 0, qchiken = 0;
    // food item sold
    int sroom = 0, spasta = 0, sburger = 0, snoodles = 0, sshake = 0, schiken = 0; 
    // total price of item
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chiken = 0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms avaliable";
    cin>>qshake;
    cout<<"\n Quantity of pasta :";
    cin>>qpasta;
    cout<<"\n Quantity of burger :";
    cin>>qburger;
    cout<<"\n Quantity of noodles :";
    cin>>qnoodles;
    cout<<"\n Quantity of shake :";
    cin>>qshake;
    cout<<"\n Quantity of chiken-roll :";
    cin>>qchiken;

    m:
    cout<<"\n\t\t\t Please select from the menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) burger";
    cout<<"\n4) noodels";
    cout<<"\n5) shake";
    cout<<"\n6) chiken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n8) Exit";
    cout<<"\n\n Please Enter Your Choice! ";
    cin>>choice;

    switch (choice)
    {
    case 1:
         cout<<"\n\n Enter the number of rooms you want: ";
         cin>>quant;
         if (qrooms-sroom >= quant)
         {
            sroom = sroom + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout<<"\n\n\t\t"<<qrooms-sroom<<"room/rooms have been alloted to you";
         }
         else {
            cout<<"\n\tOnly"<<qrooms-sroom<<"Rooms remaing in hotel ";
            break;
         }

    case 2:
         cout<<"\n\n Enter pasta Quantity : ";
         cin>>quant;
         if (qpasta-spasta >= quant)
         {
            spasta = spasta + quant;
            Total_pasta= Total_pasta + quant * 250;
            cout<<"\n\n\t\t"<<quant<<"pasta is ordered! ";
         }
         else {
            cout<<"\n\tOnly"<<qpasta-spasta<<"pasta remaing in hotel ";
            break;
         }    

    case 3:
         cout<<"\n\n Enter Burger Quantity: ";
         cin>>quant;
         if (qburger-sburger >= quant)
         {
            sburger = sburger + quant;
            Total_burger= Total_burger + quant * 120;
            cout<<"\n\n\t\t"<<quant<<"burger ordered!";
         }
         else {
            cout<<"\n\tOnly"<<qburger-sburger<<"Burger remaing in hotel ";
            break;
         }                      

    case 4:
         cout<<"\n\n Enter Noodels Quantity ";
         cin>>quant;
         if (qnoodles-snoodles >= quant)
         {
            snoodles = snoodles + quant;
            Total_noodles = Total_noodles + quant * 150;
            cout<<"\n\n\t\t"<<quant<<"noodels is orederd! ";
         }
         else {
            cout<<"\n\tOnly"<<qnoodles-snoodles<<"noodels remaing in hotel ";
            break;
         }         

    case 5:
         cout<<"\n\n Enter Quantity of shakes ";
         cin>>quant;
         if (qshake-sshake >= quant)
         {
            sshake = sshake + quant;
            Total_shake = Total_shake + quant * 250;
            cout<<"\n\n\t\t"<<quant<<" shake is orderd! ";
         }
         else {
            cout<<"\n\tOnly"<<qshake-sshake<<"shakes remaing in hotel ";
            break;
         }

    case 6:
         cout<<"\n\n Enter Chicken-roll Quantity ";
         cin>>quant;
         if (qchiken-schiken >= quant)
         {
            schiken = schiken + quant;
            Total_chiken = Total_chiken + quant * 150;
            cout<<"\n\n\t\t"<<quant<<" Chicken-roll is orderd! ";
         }
         else {
            cout<<"\n\tOnly"<<qchiken-schiken<<"chicken-roll remaing in hotel ";
            break;
         }    

    case 7:
         cout<<"\n\n Details of sales and collection. ";
         cout<<"\n\n Number of rooms we had : "<<qrooms;  
         cout<<"\n\n Number of rooms we gave for rent "<<sroom;
         cout<<"\n\n Remaing rooms :"<<qrooms-sroom;
         cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;

         cout<<"\n\n Number of pasta we had : "<<qpasta;  
         cout<<"\n\n Number of pasta we sold "<<spasta;
         cout<<"\n\n Remaing pasta :"<<qpasta-spasta;
         cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;

         cout<<"\n\n Number of burger we had : "<<qburger;  
         cout<<"\n\n Number of burger we sold "<<sburger;
         cout<<"\n\n Remaing burger :"<<qburger-sburger;
         cout<<"\n\n Total burger collection for the day : "<<Total_burger;

         cout<<"\n\n Number of noodels we had : "<<qnoodles;  
         cout<<"\n\n Number of noodels we sold "<<snoodles;
         cout<<"\n\n Remaing noodels :"<<qnoodles-snoodles;
         cout<<"\n\n Total noodels collection for the day : "<<Total_noodles;

         cout<<"\n\n Number of chiken-roll we had : "<<qchiken;  
         cout<<"\n\n Number of chiken-roll we sold "<<schiken;
         cout<<"\n\n Remaing chiken-roll :"<<qchiken-schiken;
         cout<<"\n\n Total chiken-roll collection for the day : "<<Total_chiken;     

    case 8:
         exit(0);

         default:
                cout<<"\n Please select the numbers mentioned in menu";                           
    }
    goto m;
}

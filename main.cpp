//ATM Machine
#include <iostream>
using namespace std;
int ATM_Transaction();//Prototype of the functions
int pin;
float anotherTransaction,amountToWidthdraw,amountToDeposit;//Global variable
float balance = 1000; // Global variable, Initial  balance to be 1000 for everyone

int  main()

{ cout<<"**************************************\n";
  cout<<"******** WELCOME TO APNA BANK ********\n";
  cout<<"**************************************\n";
  cout<<" Enter your pin number please: \n";
  cin>>pin;
    if(pin != 1234)
   {
       cout<<"Sorry Wrong PIN , Pls try again with your card";
   }
   else
    {
      ATM_Transaction();     // function call
    }
}

int ATM_Transaction()
{
  int choice;
  cout<<"Choose option to be served!\n\n";
  cout<<"1. Balance Enquiry \n";
  cout<<"2. Cash Withdraw\n";
  cout<<"3. Deposit Cash\n";
  cout<<"4. Exit \n";
  cin>>choice;

  switch(choice)

  {

    case 1: // BALANCE Enquiry
    cout<<"Your bank balance is: %f"<<balance;
    cout<<"\n\nDo you want to perform another transaction?\nPress 1 to proceed and 2 to exit\n\n"; // request for another transaction
    cin>>anotherTransaction;
    if(anotherTransaction == 1)
      {
        ATM_Transaction();// call our transaction method here
      }
     break;

    case 2:// Second option should be withdraw
    cout<<"Please enter amount to withdraw: ";
    cin>>amountToWidthdraw;
    if(amountToWidthdraw <= balance) //bal = 1000
    {
     cout<<"Pls collect your cash\n";
     balance=balance-amountToWidthdraw;//
     cout<<"Your available balance is \n"<< balance;
     cout<<"\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n";
     cin>>anotherTransaction;
       if(anotherTransaction == 1)
        {
             ATM_Transaction();  // call our ATM_Transaction method here
        }
    }
     else
    {
       cout<<"Sorry in-sufficient funds in your account";
       cout<<"\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n";
       cin>>anotherTransaction;
       if(anotherTransaction == 1)
        {
             ATM_Transaction();  // call our ATM_Transaction method here
        }
    }
    break;

    case 3:// DEPOSIT
    cout<<"Please enter amount to deposit: ";
    cin>>amountToDeposit;
    balance = amountToDeposit + balance; 
    cout<<"Thank you for depositing, your new balance is: "<< balance;
    cout<<"\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n";// request for another transaction
    cin>>anotherTransaction;
    if(anotherTransaction == 1)
     {
        ATM_Transaction(); // call our transaction method here
     }
    break;
    default:
     cout<<"Thanks for Using ATM services, See you soon";
  }

}





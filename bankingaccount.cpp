#include <iostream>

using namespace std;
class BankingManagmentSystem
{
    public:
    int num,openBal,totalBal;
    char name[100];

    void openAccount()
    {
        
         cout<<"\nEnter Account Number Type :";
         cin>>num;
         cout<<"Enter the Account Holder Name : ";
         cin>>name;
         cout<<"Enter opening Balance :";
         cin>>openBal; 
         totalBal=openBal;  
    }
    void showAccount()
    {
        cout<<"\nAccount Number:"<<num;
        cout<<"\nAccount Holder Name : "<<name;
        cout<<"\nopening Balance :"<<openBal;
        cout<<"\ntotal Balance :"<<totalBal;
    }
    void deposit(int a)
    {
        // int add;
        // cout<<"\nWhat Amount Will Be Deposit : ";
        // cin>>add;

        totalBal += a;
    } 
    void withdraw(int b)
    {
        // int minus;
        // cout<<"\nWhat Amount Will Be withdraw : ";
        // cin>>minus;

        totalBal -= b;
    }    
        

        

    
 };   
int main()
{
   BankingManagmentSystem user1;
   user1.openAccount();
   user1.showAccount();
   user1.deposit(60);
   user1.withdraw(30);
   user1.showAccount();



    return 0;
}
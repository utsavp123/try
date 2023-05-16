#include <iostream>

using namespace std;
class BankingManagmentSystem
{
    public:
    int num,bal,totalBal,add,minus;
    char name[100];
    void openAccount()
    {
        cout<<"Enter account number : ";
        cin>>num;
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter opening balance : ";
        cin>>bal;

    }
    void showAccount()
    {
        cout<<"\nAccount Number Is : "<<num;
        cout<<"\nName : "<<name;
        cout<<"\nOpening Balance : "<<bal;
        cout<<"\nTotal balance : "<<totalBal;
    }
    void deposit()
    {
        cout<<"\nWhat will amount deposits :";
        cin>>add;
        totalBal =bal+add;
        
    }
    void withdraw()
    {
        cout<<"\nWhat will amount Withdraw :";
        cin>>minus;

        totalBal -= minus;
    }
};
int main()
{
    BankingManagmentSystem user1;
    user1.openAccount();
    
    user1.deposit();
    user1.withdraw();
    user1.showAccount();
    return 0;
}
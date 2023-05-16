#include <iostream>

using namespace std;
class abc
{
    public:
    int a,b;
    void get()
    {
        cout<<"Enter the a : ";
        cin>>a;  
         cout<<"Enter the b : ";
        cin>>b;        

    }
};
class xyz : public abc
{
    public:
    int sum;
   void sumn()
   {
        sum=a+b;
        cout<<"sum="<<sum;

   }
};
class pqr : public abc
{
    public:
    int per,total;
    void pern()
    {
        total=a+b;
        

        per=total/2;
        cout<<"percentage="<<per;

    }

};


int main()
{
    xyz s;
    pqr s1;
    s.get();
    s.sumn();
    s1.get();
    s1.pern();


    return 0;
}
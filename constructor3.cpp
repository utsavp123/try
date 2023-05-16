#include <iostream>

using namespace std;
class abc
{
public:
    int  a, b;
    char name[20];
    void get()
    {
        cout << "Enter the name =";                               
        cin >> name;                                                          
        cout << "Enter the a =";
        cin >> a;
        cout << "enter the b= ";
        cin >> b;
    }
};
class pqr :virtual public abc
{
public:
    int sum;
    void sumn( )
    {
        sum = a + b;
        cout << "\nsum=" << sum;
    }
};
class xyz :virtual public abc
{
    public:
    int per, total;
    void pern( )
    {
        total = a + b;
        per = total / 2;
        cout << "\nper=" << per;
    }
};
class str : public pqr, public xyz
{
public:
    void showResult()
    {

        cout << "\nstudent name : " << name;
        cout << "\ntotal marks :  " << sum;
        cout << "\npercentage : " << per;
    }
};
int main()
{
    str s2;

    s2.get();
    s2.sumn();
    s2.pern();
    s2.showResult();

    return 0;
}
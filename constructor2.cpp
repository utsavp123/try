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
class pqr : public abc
{
public:
    int sum;
    void sumn(abc val)
    {
        sum = val.a +val.b;
        cout << "sum=" << sum;
    }
};
class xyz : public abc
{
public:
    int per, total;
    void pern(abc val)
    {
        total = val.a +val.b;
        per = total / 2;
        cout << "per=" << per;
    }
};
class str : public pqr, public xyz
{
public:
    void showResult()
    {

        cout << "student name " << pqr::name;
        cout << "total marks= " << sum;
        cout << "percentage=" << per;
    }
};
int main()
{
    abc c;
    c.get();
    str s1;
    s1.sumn(c);
    s1.pern(c);
    s1.showResult();

    return 0;
}
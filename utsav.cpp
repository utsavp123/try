/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class result
{
    public:
    int eng,maths,sci,sum,percentage;
    char a[100];
    
    void name()
    {
        cout<<"enter the string";
        cin>>a;
    }
    void subject()
    {
        cout<<"Englsih=";
        cin>>eng;
        cout<<"maths=";
        cin>>maths;
        cout<<"science=";
        cin>>sci;
    }
    void sumn()
    {
        sum=eng+maths+sci;
        cout<<"\nsum="<<sum;

    }
    void per()
    {
        percentage=sum/3;
        cout<<"\nper="<<percentage;
    }
    void min()
    {
        if(eng<maths && eng<sci )
        {
            cout<<"\nenglisgh is min";
        }
        else if (maths<sci)
        {
            cout<<"\nmaths is min";
        }
        else
        {
            cout<<"\nscience is min";
        }
    }
    void max()
    {
        if(eng>maths && eng>sci )
        {
            cout<<"\nenglisgh is max";
        }
        else if (maths>sci)
        {
            cout<<"\nmaths is max";
        }
        else
        {
            cout<<"\nscience is max";
        }
    }
    void atkt()
    {
        if(eng<30 || maths<30 || sci<30)
        {
            cout<<"\nATKT";
        }

    }
 
    
};
    int main()
{
    result b ;

    b.name();
    b.subject();
    b.sumn();
    b.per();
    b.min();
    b.max();
    b.atkt();
    return 0;
}
#include <iostream>

using namespace std;
class xyz
{
    public :
    int a,b;
    void get()
    {
        cout<<"a";
        cin>>a;
        cout<<"b";
        cin>>b;
    }

};

int  main()
{
    int i,n;
    xyz p[100];

    for(i=0;i<=5;i++)
    {
        p[i].get();
    }


    return 0;
}
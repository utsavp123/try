#include<iostream>
#include<string.h>


using namespace std;

int main()
{
    char c[100];
    int cnt,a,i,j;
    cout<<"enter the string=";
    cin.getline(c,100);
    cnt=strlen(c);
    cout<<"count="<<"\n"<<cnt;
    cout<<"\n"<<c;

    for(i=0;c[i]!=NULL;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<c[j];
        }
        cout<<"\n";
    }
    return 0;

      }

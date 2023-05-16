#include<iostream>

using namespace std;

int main()
{
    int n,i,a[i],index;
    cout<<"enter the array";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];    
    }

    cout<<"enter the position";
    cin>>index;

    for(i=index;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<"\n"<<"a["<<i<<"]="<<a[i];
    }
    return 0;
}


#include <iostream>

using namespace std;
int main()
{
    int n,i,a[100],sum=0;
    cout<<"Enter the array";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"\na["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        
    }
    cout<<"\nsum="<<sum;
    return 0;
}
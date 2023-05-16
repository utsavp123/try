#include <iostream>

using namespace std;
class result
{
    public:
    int eng,math,sci,total,percen,min,a[100],max;

    void get()
    {
        cout<<"eng=";
        cin>>eng;
        cout<<"math=";
        cin>>math;
        cout<<"sci=";
        cin>>sci;
    }
    void sum()
    {
        total=eng+math+sci;
        cout<<"\nsum="<<total;
    }
    void per()
    {
        percen=total/3;
        cout<<"\npercentage="<<percen;
    }
    void minn()
    {
        int a[100],i;
        a[0]=eng;
        a[1]=math;
        a[2]=sci;
        min=a[0];
        for(i=0;i<3;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }

        }
        cout<<"\nmin="<<min;
    }
    void maxn()
    {
        int a[100],i;
        a[0]=eng;
        a[1]=math;
        a[2]=sci;
        min=a[0];
        for(i=0;i<3;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }

        }
        cout<<"\nmax="<<max;
    }
};

int main()
{
    result p[100];
    int n,i;
    cout<<"enter the number of student";
    cin>>n;

    for(i=0;i<n;i++)
    {
        p[i].get();
        p[i].sum();
        p[i].per();
        p[i].minn();
        p[i].maxn();
    }
    cout<<"\n\n";
    for(i=0;i<n;i++)
    {
        cout<<"eng\tmath\tsci\tsum\tpercen\tmin\tmax\t";
        cout<<"\n"<<p[i].eng<<"\t"<<p[i].math<<"\t"<<p[i].sci<<"\t"<<p[i].total<<"\t"<<p[i].percen<<"\t"<<p[i].min<<"\t"<<p[i].max<<"\t";
    }
    return 0;
}

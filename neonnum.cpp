#include <iostream>
#include<math.h>

using namespace std;
class neon
{
    public:
    int n,rem,sum,i,mul;
    void chek()
    {
        for(i=0;i<1000;i++)
        {
            mul=pow(i,2);
            sum=0;
            for(;mul!=0;mul=mul/10)
            {
                rem=mul%10;
                sum=sum+rem;


            }
            if(i==sum)
            {
                cout<<"neon number=\n"<<sum;
            }
        }
    }
};   
int main()
{
    
    neon p;
    p.chek();
 

    return 0;
}
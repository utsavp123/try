#include <iostream>

using namespace std;
class A
{
    private:
    int a;
    public:
    int get()
    {
        a=30;
        return a;
    }
};
class B:public A
{
    public:
    void set()    
   {
        cout<<get();
    }
    
};
int main()
{
    B s;
    s.get();
    s.set();
    return 0;
}

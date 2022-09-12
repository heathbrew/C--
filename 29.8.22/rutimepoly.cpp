#include <iostream>
using namespace std;
class Base
{
   public:
   void add(double x, double y)
   {
      cout<<x+y;
   }
};
class Derived:public Base
{
   public:
   double add(double x, double y) 
   {
      return x+y;
   }
};
int main()
{
    double x,y;
    cin>>x>>y;
    
    Base obj;
    obj.add(x, y);
}
#include<iostream>
using namespace std;

class data{
   public:
       int a=20, b=40;

       data(){
         a=10,b=20;
       }

};

int main()
{
 data c;
 cout<<"a:"<<c.a<<endl;
 cout<<"b:"<<c.b;

return 0;
}

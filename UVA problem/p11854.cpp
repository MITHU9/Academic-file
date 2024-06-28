#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   while(cin>>a>>b>>c, a,b,c>0){
        int x,y,z;
        x = a*a;
        y = b*b;
        z = c*c;
     if(x + y == z || x + z == y || y + z == x)
       cout<<"right"<<endl;
      else
       cout<<"wrong"<<endl;
    }


    return 0;
}

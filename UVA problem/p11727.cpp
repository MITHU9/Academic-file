#include<iostream>
using namespace std;
int main()
{
   int n,T=1;
   cin>>n;

   while(n--){
     int a,b,c;
     cin>>a>>b>>c;
     cout<<"Case "<<T++<<": ";
     if(a>b && a>c){
        if(b>c)
            cout<<b<<endl;
        else
            cout<<c<<endl;
     }
     else if(b>c){
         if(a>c)
            cout<<a<<endl;
         else
            cout<<c<<endl;
     }
     else{
        if(b>a)
            cout<<b<<endl;
        else
            cout<<a<<endl;
     }
   }

    return 0;
}

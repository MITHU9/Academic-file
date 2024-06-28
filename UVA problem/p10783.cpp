#include<iostream>
using namespace std;
int main()
{
   int n,T=1;
   cin>>n;
   while(n--){
     int a,b,sum=0;
      cin>>a>>b;
      cout<<"Case "<<T++<<": ";
      for(int i=a; i<=b; i++){
        if(i%2!=0)
           sum = sum + i;

     }
     cout<<sum<<endl;
   }

    return 0;
}

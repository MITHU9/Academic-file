#include<iostream>
using namespace std;
int main()
{
 long long int a;
  while(cin>>a){
 long long int sum=0;

   sum=a*a*(a+1)*(a+1);
   cout<<sum/4<<endl;
  }
  return 0;
}

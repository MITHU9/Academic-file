#include<iostream>
using namespace std;
int main()
{
  int i,j;
  while(cin>>i>>j)
  {
      cout<<i<<" "<<j<<" ";
      if(i>j) swap(i,j);
      int n,max=0,count;

  while(i<=j){
     count=1;
  n=i;
  while(n!=1){
    if(n%2==0){
        n=n/2;
    }
     else{
        n=3*n+1;
     }

    count++;
  }
   if(count>max){
      max=count;
   }
   i++;
  }

  cout<<max<<endl;
  }
    return 0;
}

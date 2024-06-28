#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,result;

   while(cin>>n,n>=0) {
      result = (n*(n+1)/2)+1;
      cout<<result<<endl;
   }
  return 0;
}

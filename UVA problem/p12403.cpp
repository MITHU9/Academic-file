#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,sum = 0;
   cin>>t;
   while(t--){
     int n;
     char str[20];
     cin>>str;
     if(strcmp(str, "donate")){
           cout<<sum<<endl;
     }
     else{
        cin>>n;
        sum = sum+n;
     }
   }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T=1;
   char str[20];

   while(true){
     cin>>str;

    if(str[0] == '*')
     break;

     else if(str[0] == 'H')
        cout<<"Case "<<T++<<": Hajj-e-Akbar"<<endl;

      else
         cout<<"Case "<<T++<<": Hajj-e-Asghar"<<endl;

     }

    return 0;
}

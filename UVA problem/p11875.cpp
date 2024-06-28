#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,T=1;
   cin>>t;
   while(t--){
    int n,age,ca;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>age;
        if(i==n/2)
           ca = age;
    }
    cout<<"Case "<<T++<<": "<<ca<<endl;
   }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,T=1;
   cin>>t;
   while(t--){
    int n,v,max=1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>v;
        if(max < v)
            max = v;
    }
    cout<<"Case "<<T++<<": "<<max<<endl;
   }

    return 0;
}

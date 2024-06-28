#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,T=1;
    cin>>n;
    while(n--){
        double d,v,u,t1,t2,diff;

        cin>>d>>v>>u;
        int square = u*u - v*v;
        if(v>=u || v==0 || u==0){
          cout<<"Case "<<T++<<":"<<" can't determine"<<endl;

        }
        else{
            t1 = d/u;
            t2 = d/sqrt(square);
            diff = t2 - t1;
            cout<<"Case "<<T++<<": "<<fixed<<setprecision(3)<<diff<<endl;
        }

    }

    return 0;
}

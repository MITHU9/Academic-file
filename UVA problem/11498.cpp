#include<iostream>
using namespace std;

int main(){
    int t,n,m;
    while(cin>>t && t!=0){
        cin>>n>>m;
        int x,y;
        while(t--){
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa\n";
            else if(x>n && y>m) cout<<"NE\n";
            else if(x<n && y>m) cout<<"NO\n";
            else if(x<n && y<m) cout<<"SO\n";
            else  cout<<"SE\n";
        }
    }
    return 0;
}

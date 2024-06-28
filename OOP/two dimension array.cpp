#include<bits/stdc++.h>
using namespace std;

class samp{
   int a;
   public:
       samp(int n){
          a = n;
       }
     int get_a(){
       return a;
     }
};

int main()
{
   samp obj[4][2]={1,2,3,4,5,6,7,8};
    int i;

    for(i=0;i<4;i++){
        cout<<obj[i][0].get_a()<<" ";
        cout<<obj[i][1].get_a()<<endl;

    }
  return 0;
}

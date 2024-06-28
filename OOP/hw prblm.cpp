#include<iostream>
using namespace std;
class object{
     int i;
     int j;
public:
 object(){}

 object(int x, int y){
      i=x;
      j=y;
  }
   int get_i(){

      return i;
     }
     void show(){
       cout<<i<<" "<<j<<endl;
     }
 };
int main()
    {
     object arr[5],temp;
     arr[0]=object(300, -300);
     arr[1]=object(200, -200);
     arr[2]=object(400, -400);
     arr[3]=object(500, -500);
     arr[4]=object(100, -100);

  for(int k=0; k<5; k++){

    for(int l=k+1; l<5; l++){

    if(arr[k].get_i()>arr[l].get_i()){

         temp=arr[k];
         arr[k]=arr[l];
         arr[l]=temp;
   }
  }
 }

  for(int k=0; k<5; k++){
    arr[k].show();
 }

 return 0;
}


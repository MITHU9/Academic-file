#include<iostream>
#include<conio.h>
using namespace std;

class student{

   public:
       int id;
       double gpa;

    void display(){
       cout<<id<<"   "<<gpa<<endl;
    }

    void setValue(int x, double y){
       id = x;
       gpa = y;
    }
};

int main()
{
  student mithu,sakib;
    mithu.setValue(101,3.5);
    mithu.display();

    sakib.setValue(102,3.8);
    sakib.display();

    getch();
}

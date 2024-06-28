#include<iostream>
#include<conio.h>
using namespace std;

class student{

public:
    int id;
    double gpa;

    void display(){
       cout<< id <<" "<<gpa<<endl;
    }

    student(int x,double y){
        id = x;
        gpa = y;
    }

};

int main()
{
   student mithu(101,3.4);
   mithu.display();

   student sakib(102,3.7);
   sakib.display();

   getch();
}

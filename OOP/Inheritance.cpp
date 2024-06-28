#include<iostream>
#include<conio.h>
using namespace std;

class person{

public:
    string name;
    int age;

  void display(){
     cout<<"Name : "<<name<<endl;
     cout<<"Age : "<<age<<endl;
    }

};

class student : public person{
    public:
       int id;

    void display2(){
       cout<<"Id : "<<id<<endl;
       display();
     }
};

int main()
{
   student s1;
   s1.name = "Mithu";
   s1.age = 20;
   s1.id = 200110;
   s1.display2();

   getch();
}


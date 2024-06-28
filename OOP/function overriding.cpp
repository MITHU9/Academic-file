#include<iostream>
#include<conio.h>
using namespace std;

class person{

public:
  void display(){
     cout<<"I am a person."<<endl;
  }

};

class student : public person{
public:
    void display(){
     cout<<"I am a Student."<<endl;
  }

};

class teacher : public person{
 public:
    void display(){
     cout<<"I am a Teacher."<<endl;
  }

};

int main()
{
   student s;
   s.display();

   teacher t;
   t.display();

   getch();
}



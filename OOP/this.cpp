#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class student{

public:
     string name;

    student(string name){
        this -> name = name;
    }

    display(){
       cout<<name<<endl;
    }

};

int main()
{
   student s1("Mithu");
   s1.display();


   getch();
}


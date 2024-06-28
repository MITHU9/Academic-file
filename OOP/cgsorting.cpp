#include<iostream>
#include<string.h>
using namespace std;

class student{
   int roll;
   float cgpa;
   char name[20];

   public:
       student(){}

       student(int a, float b, char n[20]){
           roll=a;
           cgpa=b;
           strcpy(name,n);
        }

     float get_cgpa(){
        return cgpa;
      }

     void show(){
       cout<<roll<<"-"<<cgpa<<name<<endl;
     }

};

 int main()
 {
    student st[10],temp;
    int r;
    float cg;
    char n[20];
    cout<<"Enter 10 Student Roll,CGPA and Name inline:"<<endl;

    for(int i=0; i<10; i++){
        cin>>r>>cg;
        cin.getline(n,20);
        st[i]=student(r,cg,n);
    }

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(st[i].get_cgpa() < st[j].get_cgpa()){
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
    cout<<"Merit-Roll-CGPA-Name"<<endl;
    for(int k=1; k<11; k++){
        cout<<k<<"-";
        st[k-1].show();
    }
    return 0;
 }


#include<iostream>
using namespace std;

#define n 5

class Queue{
    int* arr;
    int head;
    int rear;

 public:
     Queue(){
       arr = new int[n];
       head = -1;
       rear = -1;
     }

 void enqueue(int x){
    if(rear == n-1){
     cout<<"Queue is full."<<endl;
     return;
   }

   else if(head == -1 && rear == -1){
      head = 0;
      rear = 0;
      arr[rear] = x;
   }
   else{
     rear++;
     arr[rear] = x;
   }
}

void dequeue(){
   if(head == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else if(head == rear){
       head = -1;
       rear = -1;
   }
   else{
     head++;
   }
}

 void display(){

   if(head == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else{
        cout<<"Queue:";
         for(int i = head;i<rear+1;i++){
        cout<<arr[i]<<" ";
     }
   }
   cout<<endl;
}

void peek(){
  if(head == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else{
     cout<<"Front value is:"<<arr[head]<<endl;
   }
}

};


int main()
{
    Queue q1;

    q1.enqueue(2);
    q1.enqueue(5);
    q1.enqueue(7);
    q1.enqueue(4);
    q1.enqueue(9);
    q1.enqueue(1);
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();


   return 0;
}

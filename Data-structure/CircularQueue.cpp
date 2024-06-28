#include<iostream>
using namespace std;

#define N 5

 int arr[N];
 int front=-1;
 int rear=-1;


 void enqueue(int x){
    if((rear+1)%N == front){
     cout<<"Queue is full."<<endl;
     return;
   }

   else if(front == -1 && rear == -1){
      front = 0;
      rear = 0;
      arr[rear] = x;
   }
   else{
     rear = (rear+1)%N;
     arr[rear] = x;
   }
}

void dequeue(){
   if(front == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else if(front == rear){
       front = -1;
       rear = -1;
   }
   else{
     front++;
   }
}

 void display(){
     int i = front;

   if(front == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else{
      cout<<"Queue is:";
       while(i!=rear){
         cout<<arr[i]<<" ";
          i=(i+1)%N;
       }
       cout<<arr[i]<<" ";
     }
     cout<<endl;
 }


void peek(){
  if(front == -1 && rear == -1){
      cout<<"Queue is empty."<<endl;
   }
   else{
     cout<<"Front value is:"<<arr[front]<<endl;
   }
}


int main()
{
  enqueue(2);
  enqueue(5);
  enqueue(6);
  enqueue(8);
  enqueue(3);
  enqueue(7);
  display();
  dequeue();
  dequeue();
  dequeue();
  display();
  enqueue(7);
  enqueue(9);
  peek();
  dequeue();
  display();


   return 0;
}


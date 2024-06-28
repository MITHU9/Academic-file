#include<iostream>
using namespace std;

class Node{
  public:
      int data;
      Node *next;
};

void addToFirst(Node* *head,int item){
    Node *new_node = new Node();
    if(new_node==NULL){
       cout<<"Error create Node."<<endl;
       exit(1);
    }next
    new_node->data = item;
    new_node-> = *head;
    *head=new_node;

}
void print_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<"data: "<<temp->data<<" ";
        temp = temp->next;
    }
   cout<<endl;
   return;
}


int main()
{
    Node *head=NULL;

      addToFirst(&head,10);
      addToFirst(&head,20);

     print_list(head);

    return 0;
}

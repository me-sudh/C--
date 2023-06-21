#include<iostream>

using namespace std;

class Node{
    public:
    int data;

    Node* next;

    Node(int data){
        this->data = data;
        this->next= NULL;
    };


};

// ---------------------------Insertion-----------------------------------------------------
insertAtBeginning(int data,Node* &head ,Node* &tail){    
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
};
insertAtEnd(int data,Node* &head,Node* &tail){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=temp;
};

insertAtPosition(int data, int position, Node* &head,Node* &tail){
    if(position==1){
        insertAtBeginning(data,head,tail);
       
    }
    else{
        Node* temp=new Node(data);
        Node* t= head;int n=1;
        while(n<position){
            t=t->next;
        }
        if(t->next==NULL){
            insertAtEnd(data,head,tail);
        }
        else{
            temp->next=t->next;
            t->next=temp;
        }
    }
};

// --------------------------------------------------------------------------------


// ---------------------------Printing the List-----------------------------------------------------
printList(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
};
// --------------------------------------------------------------------------------

int main(){

    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail= node1;

    insertAtBeginning(20,head,tail);
    printList(head);

    insertAtBeginning(30,head,tail);
    printList(head);

    insertAtEnd(25,head,tail);
    printList(head);
    
    insertAtEnd(35,head,tail);
    printList(head);
    
    insertAtPosition(40,1,head,tail);
    printList(head);
    
    insertAtPosition(45,7,head,tail);
    printList(head);

    insertAtPosition(1000,3,head,tail);
    printList(head);
    cout<<"head is at "<<head->data<<" ";
    cout<<"tail is at "<<tail->data;
}
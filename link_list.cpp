#include<iostream>
using namespace std;
class LinkedList{
    struct Node{
        int data;
        Node *next;
        Node(int d){
            data = d;
            next = NULL;
        }
    };
    Node *head,*tail;
    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        
    }
    void insertAtBeggning(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head =newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    void insertAtTail(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail=tail->next;
        }
    }
    
    void insertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;

        }
        else{
            Node *current = head;
            while(current->next!=NULL){
                current=current->next;
            }
            current->next=newNode;
            
        }
    }
    void display(){
        Node *current = head;
        while(current!=NULL){
            cout<<current->data<<endl;
            current = current->next;
        }
    }
};

int main(){
    LinkedList ll;
    ll.insertAtBeggning(10);
    // ll.insertAtEnd(30);
    // ll.insertAtEnd(40);
    ll.insertAtTail(100);
    ll.display();
    return 0;
}
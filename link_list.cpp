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
            tail = head;
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
    
    void deleteNode(int dataToDel){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(head->data==dataToDel){
            Node *current = head ;
            head = head->next;
            delete(current);
        }
        else{
            Node *current = head;
            while(current->next!=NULL && current->next->data!=dataToDel){
                current=current->next;
            }
            if(current->next==NULL){
                cout<<"Data does not exist"<<endl;
            }
            else{
                Node *temp= current->next;
                current->next = temp->next;
                free(temp);
            }
        }
    }
    void reverseLl(){   
        Node *current=head , *prev=NULL;
        while(current!=NULL){
        Node * temp = current->next;
        current->next = prev;
        prev = current;
        current= temp;
        }
        head = prev;
    }



};

int main(){
    LinkedList ll;
    ll.insertAtBeggning(10);
    // ll.insertAtEnd(30);
    // ll.insertAtEnd(40);
    ll.insertAtTail(100);
    ll.insertAtTail(90);
    ll.display();
    return 0;
}
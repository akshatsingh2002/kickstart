#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    Node* head=NULL;
    int data;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
class linklist{
    public:
    Node* head;
    linklist(){
        head = NULL;
    }
    void insert(int d){
        Node * temp = new Node(d);
        if(head==NULL){
            head = temp;
            return;
        }
        else{
            Node * itr = head;
            while(itr->next!=NULL){
                itr = itr->next;
            }
            itr->next = temp;
        }
        
    }
    void insertAtBegin(int d){
            Node* temp = new Node(d);
            temp->next = head;
            head = temp;
        }
    void insertAtEnd(int d){
        Node* temp = new Node(d);
        Node* itr = head;
        while(itr->next!=NULL){
            itr = itr->next;
        }
        itr->next = temp;
    }
    void print(){
        if(head == NULL){
            cout<<"empty list"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data;
    }
};
// void insertAtHead(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }

int main(){
    linklist lst1;
    lst1.insert(1);
    lst1.insert(2);
    lst1.insert(3);
    lst1.insertAtBegin(100);
    lst1.insertAtEnd(200);
    lst1.print();

    return 0;
}
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
        }
};
class linklist{
    public:
    Node* head;
    linklist(){
        head = NULL;
    }
    void insert(int d){

        Node* temp = new Node(d);
        if(head==NULL){
            head = temp;
            return;
        }
        else{
     
            Node* itr = head;
            while(itr->next!=NULL){
                itr = itr->next;
            }
            itr->next = temp;
            temp->prev = itr;
        }
    }
    void print(){
  
        Node* temp = head;
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;

    }
};
int main(){
    linklist lst1;
    lst1.insert(10);
    lst1.insert(20);
    lst1.print();
    return 0;
}
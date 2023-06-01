#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
int val;
Node* left;
Node* right;
Node(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
}
};

void leverlorder(Node* root){
    vector<Node*> current,next;
    if(root == NULL){
        cout<<"NULL Value of root ";
    }
    else{
        current.push_back(root);
        for(auto itr:current){
            cout<<itr->val<<endl;   
            if(itr->left!=NULL){
                next.push_back(itr->left);
            }
            if(itr->right!=NULL){
                next.push_back(itr->right);
            }
            swap(current,next);
            next.clear();
        }
    }
}
int main(){
    Node* nd1 = new Node(1);
    Node* nd2 = new Node(2);
    Node* nd3 = new Node(3);
    Node* nd4 = new Node(4);
    nd1->left = nd2;
    nd1->right =nd3;
    nd3->left= nd4;
    leverlorder(nd1);
    return 0;
}
//    Following is the Linked List node structure
#include<bits/stdc++.h>
    using namespace std;
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
Node* kReverse(Node* head, int k) {
    // 	base case
    if(head==NULL){
        return NULL;
    }
// 	step 1 reverse first k nodes
    Node* next=NULL;
    Node* curr=head;
    Node* prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
// 	step2: bhai recursion dekh le ga age wala
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
// 	step3: return head of reversed List
    return prev;

}
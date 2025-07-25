#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1){
        data=data1;
        next=NULL;
        back=NULL;
    }
};

Node* convertArr2DLL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],NULL,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }

    Node* prev=head;
    head=head->next;

    head->back=NULL;
    prev->next=NULL;

    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }

    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newtail=tail->back;
    newtail->next=NULL;

    tail->back=NULL;
    delete tail;

    return head;
}

Node* deletekthNode(Node* head,int k){
    if(head==NULL) return NULL;

    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }

    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        head=deleteHead(head);
        return head;
    }
    else if(front==NULL){
        head=deleteTail(head);
        return head;
    }
    else{
        prev->next=front;
        front->back=prev;

        temp->next=NULL;
        temp->back=NULL;
        delete temp;

        return head;
    }
}

void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;

    if(front==NULL){
        prev->next=NULL;

        temp->back=NULL;
        delete temp;
        return;
    }

    prev->next=front;
    front->back=prev;

    temp->next=NULL;
    temp->back=NULL;
    delete temp;
    return;
}

Node* insertBeforeHead(Node* head,int val){
    Node* newhead=new Node(val,head,NULL);
    head->back=newhead;
    return newhead;
}

Node* insertBeforeTail(Node* head,int val){
    if(head->next==NULL){
        return insertBeforeHead(head, val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}

Node* insertBeforeKthNode(Node* head,int k,int val){
    if(k==1){
        return insertBeforeHead(head, val);
    }

    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }

    Node* prev=temp->back;
    Node* newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head; 
}

void insertBeforeNode(Node* node,int val){
    Node* prev=node->back;
    Node* newnode=new Node(val,node,prev);
    prev->next=newnode;
    node->back=newnode;
    return;
}

int main(){
    vector<int> arr={12,5,8,7,9};
    Node* head=convertArr2DLL(arr);
    // head=deleteHead(head);    // Deletes the first node (12)
    // head=deleteTail(head);     // Deletes the last node (9)
    // head=deletekthNode(head,3); // Deletes the 3rd node (8)
    // deleteNode(head->next); // Deletes the 2nd node (5)
    // head=insertBeforeHead(head, 10); // Inserts 10 before the head (12)
    // head=insertBeforeTail(head, 15); // Inserts 15 before the tail  
    // head=insertBeforeKthNode(head, 3, 20); // Inserts 20 before the 3rd node (8) 
    // insertBeforeNode(head->next, 25); // Inserts 25 before the 2nd node (5)
    print(head);
    return 0;
}


//for reversing a doubly linked list.  (prev and next pointers are swapped .Nothing else)
//concept is same as:- 
// temp=first;
//first=second;
//second=temp;
Node* reverseDLL(Node* head)
{   
    // Write your code here   
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* curr=head;
    Node* last=NULL;
    while(curr!=NULL){
        last=curr->prev;
        curr->prev=curr->next;
        curr->next=last;

        curr=curr->prev;
    }
    return last->prev;
}

//STACK USING ARRAY

#include<iostream>
using namespace std;
int top=-1;
    void push(int stack[],int n,int data){
       if(top==n-1){
           cout<<"sorry the stack is already full";
       } 
       else{
           top=top+1;
           stack[top]=data;
       }
       
    }
    
    void pop(int stack[],int n){
        if(top==-1){
            cout<<"underflow";
        }
        else{
            int deleteditem;
            deleteditem=stack[top];
            top--;
        }
    }
    
   
int main(){
    int A[10];
    //pusing elements
    push(A,10,1);
    push(A,10,2);
    push(A,10,3);
    push(A,10,4);
    push(A,10,5);
    
    //poping elements
    pop(A,10);
    return 0;
}













//STACK USING LINKED LIST

#include <iostream>
using namespace std;
 struct  Node {
     int data;
     Node *next;
 };
 
 Node *top = NULL;
   void push(int x){
      Node *t=new Node;
      t->data=x;
      
      if(top==NULL){
          top=t;                //for first node
          t->next=NULL;
      }
      else{
          Node *p=top;
          while(p->next!=NULL){
              p=p->next;
          }
          p->next=t;
          t->next=NULL;
          
      }      
      
       
   }
   
   
   void pop(){
       Node *p;
       while(p->next->next!=NULL){
           p=p->next;
       }
       Node *t=p;
       t=p->next;
       delete t;
       p->next=NULL;
       
    }
   
   
   
   
   
   void display(){
       Node *p=top;
       while(p->next!=NULL){
           cout<<p->data<<" ";
           p=p->next;
       }
       cout<<p->data<<endl;
   }
   
   
 
 int main(){
    
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(90);
    push(60);
    push(70);
    push(80);
    
    display();
    
   pop();
   
    display();
    
    return 0;
}


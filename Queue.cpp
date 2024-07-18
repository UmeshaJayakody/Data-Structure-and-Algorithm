#include<iostream>
using namespace std;

# define N 5
int Queue[N];
int rear =-1;
int front =-1;

void Enqueue(int x){
    if(rear==N-1){
        cout<<"Overflow"<<endl;
    }
    else if(front==-1 && rear==-1){
        rear++;
        front++;
        Queue[rear]=x;
        cout<<"Enqueue value "<<x<<"."<<endl;
    }
    else{
        rear++;
        Queue[rear]=x;
        cout<<"Enqueue value "<<x<<"."<<endl;
    }
}

void Dequeue(){
    if(rear==-1 && front ==-1){
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){
        int popvalue=Queue[front];
        front=rear=-1;
        cout<<"Dequeue value  "<<popvalue<<"."<<endl;
    }
    else{
        int popvalue=Queue[front];
        front++;
        cout<<"Dequeue value  "<<popvalue<<"."<<endl;
    }
}

void frontvalue(){
    if(rear==-1 && front ==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"front value is "<<Queue[front]<<"."<<endl;
    }
}

void rearvalue(){
    if(rear==-1 && front ==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"rear value is "<<Queue[rear]<<"."<<endl;
    }
}

void display(){
    if(rear==-1 && front ==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<Queue[i]<<"  "<<endl;
        }  
    }
}

void isempty(){
    if(rear==-1 && front ==-1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }  
}

int main(){

while(true){
    int num;
    cout<<"1.Enqueue\t->1\n2.Dequeue\t->2\n3.front\t\t->3\n4.display\t->4\n5.isempty\t->5\n6.rear\t\t->6\nEnter operation : "<<endl;
    cin>>num;

    switch (num)
    {
    case 1:
        int pushvalue; 
        cout<<"Enter Enqueue value"<<endl;
        cin>>pushvalue;
        Enqueue(pushvalue);
        break;
    
    case 2:
        Dequeue();
        break;

    case 3:
        frontvalue();
        break;    

    case 4:
        display();
        break;

    case 5:
        isempty();
        break;
    
    case 6:
        rearvalue();
        break; 

    default:
        cout<<"invalid input"<<endl;
        break;
    }
    
    
}
return 0;
}
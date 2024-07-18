#include<iostream>
using namespace std;

# define N 5
int stack[N];
int top =-1;


void push(int x){
    if(top==N-1){
        cout<<"Owerflow"<<endl;
    }
    else{
        top++;
        stack[top]=x;
        cout<<"Push value "<<x<<"."<<endl;
    }
}

void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        int popvalue=stack[top];
        top--;
        cout<<"pop value  "<<popvalue<<"."<<endl;
    }
}

void peak(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Peak value is "<<stack[top]<<"."<<endl;
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<"  "<<endl;
        }  
    }
}

void isempty(){
    if(top==-1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }  
}

int main(){

while(true){
    int num;
    cout<<"1.push\t\t->1\n2.pop\t\t->2\n3.peak\t\t->3\n4.display\t->4\n5.isempty\t->5\nEnter operation : "<<endl;
    cin>>num;

    switch (num)
    {
    case 1:
        int pushvalue; 
        cout<<"Enter push value"<<endl;
        cin>>pushvalue;
        push(pushvalue);
        break;
    
    case 2:
        pop();
        break;

    case 3:
        peak();
        break;    

    case 4:
        display();
        break;

    case 5:
        isempty();
        break;

    default:
        cout<<"invalid input"<<endl;
        break;
    }
    
    
}
return 0;
}
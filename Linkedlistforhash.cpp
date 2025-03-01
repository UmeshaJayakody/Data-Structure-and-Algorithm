#include <iostream>
using namespace std;

struct Node {
    string user_name;
    string password;
    Node *link;
};

struct LinkedList{
    Node * head = NULL;
    int length = 0;
    void insert(string user_name,string password){
        if (head==NULL){
            Node * temp;
            temp = new Node;
            temp->user_name = user_name;
            temp->password = password;

            temp->link = NULL;
            head = temp; 
            length++;
        }
        else{
            Node* temp = new Node;
            temp->user_name = user_name;
            temp->password = password;
            temp->link = NULL;
            while (true){
                if (head->link== NULL){
                    break;
                }
                else{
                    head = head->link;
                }
            }
            head->link = temp;
            length++;
        }
    }

    void search(string user_name){
        Node * temp = head;
        for(int i=0;i<length;i++){
            if(temp->user_name==user_name){
                cout<<"Password: "<<temp->password<<"\n";
            }
            else{
                temp = temp->link; 
            }
        }
    }

    void print_list(){
        if (head == NULL){
            cout<<"[]"<<endl;
        }
        else{
            Node * temp = head;
            cout<< "[";
            while (temp != NULL){
                cout<<temp->user_name<<", ";
                temp = temp->link;
            }
             cout<< "]"<<endl;
        }
    }


};

#include <cstring>
#include <string>
#include <iostream>
using namespace std;


struct HashTable{
    int TableSize = 4;
    string * password = new string[TableSize];

    void intialize_hashtable(){
        cout<<"intialize hashtable ..."<<endl;
        for (int i = 0; i < 4; i++){
            password[i].clear();
        }
    }

    bool isFull(){
        bool full = true;
        int count = 0;
        for (int i = 0; i < TableSize; i++){
            if(password[i].empty()){
                full = false;
            }
        }
        return full;
    }

    int hashfunc(string user_name){
        int sum = 0;
        for(char i : user_name){
            sum+=(int)i;
        }
        int hash = sum % TableSize;
        return hash;
    }

    bool is_slot_empty(int hash){
        bool empty = password[hash].empty();
        return empty;
    }

    void insert(string user_name,string user_password){
        int location = hashfunc(user_name);
        password[location]=user_password;
    }

    void hash_lookup(string user_name){
        int hash;
        bool empty;
        hash = hashfunc(user_name);
        empty = is_slot_empty(hash);
        if(empty){
            cout<<"No item found\n";
        }
        else{
            cout<<"user name : "<<user_name<<"-> "<<password[hash]<<endl;
        }
    }

    void delete_item(string user_name){
        int hash;
        bool empty;
        hash = hashfunc(user_name);
        empty = is_slot_empty(hash);
        if(empty){
            cout<<"No item found\n";
        }
        else{
            password[hash].clear();
            cout<<"User deleted\n";
        }

    }
    void print_hashtable(){
        for(int i=0;i<TableSize;i++){
            cout<<"["<<i<<"]-->"<<password[i]<<"\n";
        }
    }

};

int main(){
    HashTable * hashtbl = new HashTable;
    hashtbl->intialize_hashtable();
    int command=0;
    string user_name;
    string password;
    while (command!=-1){
        cout << "Type command:\n\t(-1)\tfor exit \n\t(01)\tfor insert the new item\n\t(02)\tfor delete item \n\t(03)\tfor look password\n\t(04)\tfor print hashtable\nEnter here : \n";
        cin >> command;
        switch (command){
        case 1:
            //insert the new item
            cout << "Enter user name: ";
            cin >> user_name;
            cout << "Enter password to be saved: ";
            cin >> password;
            hashtbl->insert(user_name,password);
            break;
        case 2:
            //delete item 
            cout << "Enter item to be deleted: ";
            cin >> user_name;
            hashtbl->delete_item(user_name);
            break;
        case 3:
            // look password
            cout << "Enter user name to look up password:";
            cin >> user_name;
            hashtbl->hash_lookup(user_name);
            break;
        case 4:
            // print hashtable
            hashtbl->print_hashtable();
            break;
        case -1:
            // exit
            cout << "Exiting...\n";
            break;
        
        }
    }
    return 0;
}

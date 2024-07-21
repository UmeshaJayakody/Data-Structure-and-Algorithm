#include<iostream>
#include <string>
using namespace std;

struct Person {
  string Name;
  string contact_no;
  int Age;
};

int main() {
    Person p_1;
    p_1.Name = "Umesha Jayakody";
    p_1.contact_no = "+9455620987";
    p_1.Age=23;

    Person p_2;
    p_2.Name = "Piumi Jayakody";
    p_2.contact_no = "+9455820987";
    p_2.Age=23;

    cout<<p_1.Name<<" : "<<p_1.contact_no<<" : "<<p_1.Age<<endl;
    cout<<p_2.Name<<" : "<<p_2.contact_no<<" : "<<p_2.Age<<endl;

    return 0;
}
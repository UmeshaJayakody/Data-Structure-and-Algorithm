#include<iostream>
using namespace std;
int main(){
    int array[6]={1,2,3,4,5,6};
    for(int i : array){
        cout<<i<<" ";
    }
    return 0;
}
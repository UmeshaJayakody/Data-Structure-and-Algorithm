//Bubble sort
//worst/average/best time complexity=o(n^2)
//space complexity=o(1)
#include<iostream>
using namespace std;
int main(){
    int array[10] = {2,6,8,1,70,9,2,3,0,90};
    int i=0;
    bool swaped=false;
    do{
            swaped=false;
            for (int j =0; j < 10-i-1; j++)
            {
                if(array[j]>array[j+1]){
                    int temp =array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                    swaped=true;
                }
            }
            i++;
    }
    while(i<9 && swaped==true);
    for(int i:array){
        cout<<i<<" ";
    }
}
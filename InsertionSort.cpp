//insertion sort
//worst/average/best time complexity=o(n^2)
//space complexity=o(1)
#include<iostream>
using namespace std;
int main(){
    int array[10] = {2,6,8,1,70,9,2,3,0,90};
    for(int i=1;i<10;i++){
        int temp=array[i];
        for(int j=i-1;j>=0;j--){
            if(j==0 && array[j]>=temp){
                array[j+1]=array[j];
                array[j]=temp;
            }
            else if(array[j]>=temp){
                array[j+1]=array[j];
            }
            else{
                array[j+1]=temp;
                break;
            }
        }
    }
    for(int i:array){
        cout<<i<<" ";
    }
}
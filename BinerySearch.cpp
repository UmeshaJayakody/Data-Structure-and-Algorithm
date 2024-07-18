// time complexity Worst case => O(log(n))
// time complexity Average case => O(log(n))
// time complexity Best case => O(1)

#include<iostream>
#include <vector>
using namespace std;

int BinerySearch(vector<int> array,int value,int A,int B){
    int M = (int)((A+B)/2);
    if(array[M]==value){
        return M;
    }
    else if(A>B){
        return -1;
    }
    else if(array[M]>value){
        return BinerySearch(array,value,A,M-1);
    }
    else{
        return BinerySearch(array,value,M+1,B);;
    }
}
int main(){
    vector <int> SortedArray = {5,9,17,23,25,45,59,63,71,89};
    for(int i : SortedArray){
           cout<<BinerySearch(SortedArray,i,0,9)<<endl;
    }
    cout<<BinerySearch(SortedArray,88,0,9)<<endl;
    return 0;
}
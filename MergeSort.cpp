// Time complexity => theta(nlog(n))
// m = size of  |  A n = size of B

#include<iostream>
#include <vector>
using namespace std;

void merge(int Array[],int A,int M,int B){
    
    int SizeA = M-A+1;
    int SizeB = B-M;
    int ArrayA[SizeA];
    int ArrayB[SizeB];

    for (int l= 0; l < SizeA; l++){
        ArrayA[l] = Array[A+l];
    }

    for (int m = 0; m < SizeB; m++){
        ArrayB[m] = Array[M+1+m];
    }

    int i =0;
    int j =0;
    int k =A;
    
    while(i< SizeA && j<SizeB){
        if(ArrayA[i]<=ArrayB[j]){
            Array[k++]=ArrayA[i++];
        }
        else{
            Array[k++]=ArrayB[j++];
        }
    }

    for(i;i<SizeA;i++){
        Array[k++]=ArrayA[i];
    }
    for(j;j<SizeB;j++){
        Array[k++]=ArrayB[j];
    }

}

void mergeSort(int Array[],int A,int B){
        if(A<B){
            int M = (A+B)/2;
            mergeSort(Array,A,M);
            mergeSort(Array,M+1,B);
            merge(Array,A,M,B);
        }
    }

int main (){
    int Arrays[] ={ 12, 11, 13, 5, 6, 7 };
    mergeSort(Arrays,0,5);
    for(int i : Arrays){
        cout<<i<<" ";
    } 
}
// Time complexity => theta(m+n)
// m = size of  |  A n = size of B

#include<iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int>A,vector<int>B){
    vector<int> MergedArray;
    int SizeA = A.size();
    int SizeB = B.size();
    int i =0;
    int j =0;
    int k =0;
    while(i< SizeA && j<SizeB){
        if(A[i]<B[j]){
            MergedArray.push_back(A[i++]);
        }
        else{
            MergedArray.push_back(B[j++]);
        }
    }
    for(i;i<SizeA;i++){
        MergedArray.push_back(A[i]);
    }
    for(j;j<SizeB;j++){
        MergedArray.push_back(B[j]);
    }
    return MergedArray;
}

int main (){
    vector<int> A ={2,8,15,18,40,78};
    vector<int> B ={5,9,12,17};
    vector<int> C=merge(A,B);
    for(int i : C){
        cout<<i<<" ";
    } 
}
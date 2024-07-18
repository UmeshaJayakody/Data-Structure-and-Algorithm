#include <iostream>
using namespace std;
void heapify(int array[],int i,int N)
{
    int largestroot= i;
    int left = 2 * i +1;
    int right = 2 * i + 2;

    if(left < N && array[left] > array[largestroot]){
        largestroot = left;
    }
    if(right < N && array[right] > array[largestroot]){
        largestroot = right;
    }
    if (largestroot != i) {
        int temp= array[i];
        array[i]= array[largestroot];
        array[largestroot]=temp;
        heapify(array,largestroot,N);
    }
}

void heapSort(int array[],int N){
    for (int i = N / 2 - 1; i >= 0; i--){
        heapify(array,i,N);
    }

    for (int j = N - 1; j > 0; j--) {
        int temp=array[j];
        array[j]=array[0];
        array[0]=temp;
        heapify(array,0,j);
    }
}

int main()
{
    int N=6;
    int array[N] = { 20, 4, 3, 9, 6, 8 };
    heapSort(array,N);
    cout << "Sorted array is : "<<endl;
    for (int i = 0; i < N; ++i)
        cout << array[i] << " ";
}

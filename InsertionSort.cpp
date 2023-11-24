#include<iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

}

int main()
{
    int arr[10] = {10,2,4,5,6,7,8,2,3,1};
    insertionSort(arr,10);
    printArray(arr,10);
    return 0;
}
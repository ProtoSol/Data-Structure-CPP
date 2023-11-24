#include<iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
}

void bubbleSort(int arr[], int n)
{   
    bool flag;
    for(int i = 0; i < n - 1; i++){
        flag = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        
        if (!flag) {
            break;
        }
    }
}

int main()
{
    int arr[10] = {10,2,4,5,6,7,8,2,3,1};
    bubbleSort(arr,10);
    printArray(arr,10);
    return 0;
}
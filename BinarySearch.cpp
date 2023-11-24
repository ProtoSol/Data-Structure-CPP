#include<iostream>
using namespace std;

void BinarySearch(int arr[],int num, int start, int end){
    int mid;
    if(start > end){
        cout<< "Number not Found" <<endl;
    }
    else{
        mid = (start + end)/2;
        if (num == arr[mid])
        {
            cout<< "Number Found at "<<mid<< " Index of the Array"<<endl;
        }
        else if(num > arr[mid]){
            BinarySearch(arr, num, mid + 1, end);
        }
        else if(num < arr[mid]){
            BinarySearch(arr, num, start, mid -1);
        }
        
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    BinarySearch(arr, 2, 0, 5);
    return 0;
}
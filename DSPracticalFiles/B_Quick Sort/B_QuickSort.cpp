#include <iostream>
using namespace std;

// Function to partition the array and return the index of the pivot element
int partition(int arr[], int low, int high){
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low -1; // Index of the smaller element

    for (int j = low; j < high; j++){
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]); // Swap the pivot element 
    return i + 1; // Return the index of the pivot
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high){
    if(low < high){
        // Partition the array and get the index of the pivot
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays before and after the pivot
        quickSort(arr, low, pivotIndex -1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 25, 91, 54, 69};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target){
    if(low <= high){
        int mid = low + (high - low) / 2;

        // If the target is found at the middle, return it
        if(arr[mid] == target){
            return mid;
        }

        // If the target is greater than the middle element, search in the right half
        if(arr[mid] < target){
            return binarySearch(arr, mid + 1, high, target);
        }

        // If the target is smaller than the middle element, search in the left half
        return binarySearch(arr, low, mid - 1, target);
    }

    // Return -1 if the target is not found
    return -1;
}

int main(){
    int arr[] = {11, 12, 22, 54, 78};
    int target = 22;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, target);

    if(result != -1){
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;

}
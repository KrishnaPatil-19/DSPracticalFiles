#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if(arr[i] == target){
            return i; // Returning the ndex of the target if it is found
        }
    }
    return -1; // Return -1 if the element is not found in the array
}

int main(){
    int arr[] = {57, 26, 34, 18, 69};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 34;

    int result = linearSearch(arr, n, target);

    if(result != -1){
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array"<< endl;
    }

    return 0;
}
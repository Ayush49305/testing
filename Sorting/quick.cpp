//  Quick Sort is a divide and conquer sorting technique.
// It works by selecting one element as the pivot, and then rearranging the list so that:
// *All elements smaller than the pivot come before it.
// *All elements greater than the pivot come after it.
// After that, the same process is recursively applied to the left and right parts until the list is sorted.cp

//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1)
            i++;

        while (arr[j] > pivot && j >= low + 1)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Call quicksort
    qs(arr, 0, n - 1);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

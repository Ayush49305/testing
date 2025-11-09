// It works by repeatedly selecting the smallest (or largest) element from the unsorted part of the list and placing it in its correct position in the sorted part.
#include<iostream>
using namespace std;

// Function to perform selection sort
void selection_sort(int arr[], int n) {
  
  // Outer loop → runs n-1 times (each time places the next smallest element)
  for(int i = 0; i < n - 2; i++) {
    
    int mini = i;  // Assume current index has the smallest value

    // Inner loop → find the index of the smallest element in the remaining array
    for(int j = i; j < n; j++) {
      if(arr[j] < arr[mini]) {
        mini = j;  // Update index of minimum element
      }
    }

    // Swap the smallest element found with the first element of the unsorted part
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;  // Input number of elements

  int arr[n];
  cout << "Enter array elements: ";
  for(int i = 0; i < n; i++)
    cin >> arr[i];  // Input all elements

  // Call the selection sort function
  selection_sort(arr, n);

  // Display the sorted array
  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

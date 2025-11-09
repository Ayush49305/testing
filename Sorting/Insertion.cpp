// Insertion Sort is a simple sorting technique where we pick one element at a time from the unsorted part of the list and insert it into its correct position in the sorted part.

#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){

    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
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
  insertion_sort(arr, n);

  // Display the sorted array
  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}
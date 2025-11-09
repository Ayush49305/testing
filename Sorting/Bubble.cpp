// Bubble Sort is a simple sorting method where we repeatedly compare two neighboring elements and swap them if they are in the wrong order.
// This process is repeated until the list becomes completely sorted. 
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
        
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]= temp;
           }
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
  bubble_sort(arr, n);

  // Display the sorted array
  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }


    return 0;
}
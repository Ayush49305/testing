// Merge Sort is a divide and conquer sorting technique.
// It works by dividing the list into two halves, sorting each half, and then merging the two sorted halves to form the final sorted list.
#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[],int low,int mid,int high){
  vector <int> temp;

  int left=low;
  int right=mid+1;
  while(left<=mid && right<=high){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else{
      temp.push_back(arr[right]);
      right++;
    }
  }

  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }

  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }

  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }
}

void mS(int arr[],int low,int high){
  if(low==high) return;
  int mid=(low+high)/2;
  mS(arr,low,mid);
  mS(arr,mid+1,high);
  merge(arr,low,mid,high);
}

void merge_sort(int arr[],int n){
  mS(arr,0,n-1);
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
  merge_sort(arr, n);

  // Display the sorted array
  cout << "Sorted array: ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
    return 0;
}
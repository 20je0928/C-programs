/*
  This program sorts an array of n integers in ascending order using the Selection sort algorithm.

  Input format: 
  Integer n
  arr[0] arr[1] arr[2] ... arr[n-1]

  TC: O(n^2)
  SC: O(1)
  
*/

#include <iostream>
#include <limits>
using namespace std;

void swap (int i, int j, int arr[]) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void selectionSort (int arr[], int n) {
  for (int i=0; i<n-1; i++)  {
    int minIndex = i;
    for (int j=i+1; j<n; j++) {
      if (arr[j]<arr[minIndex]) {
        minIndex = j;
      }
    }
    if (minIndex!=i) {
      swap (minIndex, i, arr);
    }
  }
}

void display (int arr[], int n) {
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main () {
  int n;
  cin >> n;
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  int* arr = new int[n];
  for (int i=0; i<n; i++) {
    cin >> arr[i];
  }
  selectionSort(arr, n);
  display(arr, n);
  delete[] arr;
  return 0;
}

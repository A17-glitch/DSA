#include <iostream>
using namespace std;

/*
    Binary Search

    How it works:
    - Works only on sorted arrays'
    - Repeatedly divides the array in half
    - Compares the middle element with the target(key)

    Use it when:
    - Data is sorted (only works in sorted data (so any kin of sorting
   algorithms should be used if array is unsorted))
    - You need fast lookup (logarithmic time)

    time complexity : O(Log n)
    space complexity : O(1)

    Example:

    Input:
    n = 6;
    2 5 8 12 16 23
    key = 12;

    Output:
    Element founded at : 3


*/

int BinarySearch(int arr[], int n, int key) {

  int low = 0;
  int high = n - 1;

  while (low <= high) {

    int mid = low + (high - low) / 2;

    if (key == arr[mid])
      return mid;

    else if (key > arr[mid])
      low = mid + 1; // search in right half

    else // key<arr[mid]
      high = mid - 1;
  }
  return -1; // element not founded;
}

int main() {
  int n, key;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> key;

  int result = BinarySearch(arr, n, key);

  if (result < 0)
    cout << "\nElement not found!\n";
  else
    cout << "\nElement founded at index :" << result << endl;
}
#include <bits/stdc++.h>
using namespace std;

/*
    Linear Search(Sequential Search)

    Use it when:
    - Array is unsorted (also works in sorted array, based on the need)
    - Small data size
    - You just need a simple approach

    time complexity : O(n)
    space complexity : O(1)

    Example:

    Input:
    n = 5;
    3 7 9 12 15
    key = 9;

    Output:
    Element founded at : 3


*/

int LinearSearch(int arr[], int n, int key) {

  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i; // found
    }
  }

  return -1; // not found
}

int main() {
  int n, key;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> key;

  int result = LinearSearch(arr, n, key);

  if (result < 0)
    cout << "\nElement not found!\n";
  else
    cout << "\nElement founded at index :" << result << endl;
}
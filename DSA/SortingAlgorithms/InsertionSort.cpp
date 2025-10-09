/*

Sorting Algorithm : Insertion Sort
Time Complexity : O(n^2)


Exapmle:

Input: 13 46 24 52 20 9
Output : 9 13 20 24 46 52

*/

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n) {

  for (int i = 1; i < n; i++) {
    int current = arr[i];
    int previous = i - 1;

    while (previous >= 0 && arr[previous] > current) {
      arr[previous + 1] = arr[previous];
      previous--;
    }

    arr[previous + 1] =
        current; // placing the current element in its correct position
  }
}

int main() {

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  InsertionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
/*

Sorting Algorithm : Selection Sort
Time Complexity : O(n^2) average case


Exapmle:

Input: 13 46 24 52 20 9
Output : 9 13 20 24 46 52

*/
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n) {

  int mini;

  for (int i = 0; i < n - 1; i++) {
    mini = i; // unsorted part

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }

    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;

    // swap(arr[i], arr[mini]);
  }
}

int main() {

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  SelectionSort(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
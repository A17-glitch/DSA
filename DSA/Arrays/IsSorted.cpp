#include <bits/stdc++.h>
using namespace std;

bool IsSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {

    }

    else {
      return false;
    }
  }

  return true;
}
int main() {

  // int arr[] = {1,2,2,3,3,4}; //sorted array;
  int arr[] = {1, 2, 1, 3, 4}; // not a sorted array;
  int n = 5;

  cout << IsSorted(arr, n) << endl;

  return 0;
}
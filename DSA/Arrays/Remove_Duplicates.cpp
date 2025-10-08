#include <bits/stdc++.h>
using namespace std;

int RemoveDuplicates(int arr[], int n) {

  int i = 0;

  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }

  return (i + 1);
}

int main() {
  // remove duplicates
  // optimal solution :
  // time complexicity : O(N)
  // spcae complexity : O(1)

  int arr[] = {1, 1, 2, 2, 2, 3, 3};
  int n = 7;

  cout << RemoveDuplicates(arr, n) << endl;
  return 0;
}
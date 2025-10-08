/*

second largest element (without using sorting algorithms)

time complexity : O(n)

*/

#include <bits/stdc++.h>
using namespace std;
int main() {

  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = 6;

  int largest = arr[0];
  int second_largest = -1;
  // assumig array doesn't have negative values, if there are any
  // negative values then second_largest = -1;

  // this is an optimal solution:
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      second_largest = largest;
      largest = arr[i];
    }

    else if (arr[i] < largest && arr[i] > second_largest) {
      second_largest = arr[i];
    }
  }

  cout << "The second largest element is : " << second_largest << endl;

  return 0;
}
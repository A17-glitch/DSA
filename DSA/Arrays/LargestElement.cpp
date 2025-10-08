// largest element

#include <bits/stdc++.h>
using namespace std;

int main() {

  int arr[] = {3, 2, 1, 5, 2};
  int n = 5;

  /*

brute force : (applying bubble sort)sort the array and then print the
  largest;
  time complexcity : O(n^2)
  space complexity : O(1)

  */

  /*
  bubble sort:

  for (int i = 0; i < n - 1; i++) {
    bool isSwapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);

        isSwapped = true;
      }
    }

    if (!isSwapped)
      break;
  }

  cout<<"The largest element is : "<<arr[n-1]<<endl;

  */

  /*

    optimal solution:
    time complexcity : O(n)
    space complexity : O(1)

  */

  int largest = arr[0];

  for (int i = 0; i < n; i++) {
    if (largest < arr[i]) {
      largest = arr[i];
    }
  }

  cout << "The largest element is: " << largest << endl;

  return 0;
}
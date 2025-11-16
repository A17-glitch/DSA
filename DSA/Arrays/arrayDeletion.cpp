#include <iostream>
using namespace std;
int main() {

  int n, element, index;
  cout << "Enter array size: ";
  cin >> n;

  int arr[100];

  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Enter index number where you want to perform delete element: ";
  cin >> index;

  for (int i = index; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  n--;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
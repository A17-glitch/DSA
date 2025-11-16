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

  cout << "Enter array element you want to add: ";
  cin >> element;

  cout << "Enter index number where you want add element: ";
  cin >> index;

  for (int i = n - 1; i >= index; i--) {
    arr[i + 1] = arr[i];
  }
  arr[index] = element;
  n++;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
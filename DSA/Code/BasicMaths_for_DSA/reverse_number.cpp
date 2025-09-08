#include <iostream>
using namespace std;
int main() {
  int n, reverse_number = 0;
  cin >> n;

  while (n > 0) {
    int lastdigit = n % 10;

    reverse_number = (reverse_number * 10) + lastdigit;

    n /= 10;
  }
  cout << "The reverse number is: " << reverse_number << endl;

  return 0;
}

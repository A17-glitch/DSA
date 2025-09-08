#include <iostream>
using namespace std;
int main() {
  int n, count = 0;
  cin >> n;

  while (n > 0) {
    int lastdigit = n % 10;
    count++;
    n = n / 10;
  }
  cout << "number of digits is: " << count << endl;

  return 0;
}

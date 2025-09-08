#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int copy = n, count = 0, temp = n, armstrong = 0;

  while (copy > 0) {
    count++;
    copy /= 10;
  }

  while (temp > 0) {
    int last = temp % 10;
    armstrong += (int)pow(last, count);
    temp /= 10;
  }

  if (armstrong == n)
    cout << n << " is an Armstrong number" << endl;
  else
    cout << n << " is not an Armstrong number" << endl;

  return 0;
}

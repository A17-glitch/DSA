#include <iostream>
using namespace std;

bool isPalindrome(int x, int y) {
  int reverse_number = 0;
  while (x > 0) {
    int lastdigit = x % 10;

    reverse_number = (reverse_number * 10) + lastdigit;

    x /= 10;
  }
  if (reverse_number == y)
    return true;
  else
    return false;
}
int main() {
  int n, copy;
  cin >> n;
  copy = n;

  bool palindromeCheck = isPalindrome(n, copy);

  if (palindromeCheck)
    cout << "It's a palindrome number" << endl;
  else
    cout << "It's not a palindrome number" << endl;

  return 0;
}

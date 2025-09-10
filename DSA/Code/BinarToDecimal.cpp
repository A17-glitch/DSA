// binary to decimal number conversion
// source : apna college

#include <iostream>
using namespace std;
int main() {
  int decimal_number, ans = 0, pow = 1;

  cout << "Enter yiur decimal number: ";
  cin >> decimal_number;

  int copy_decimal_number = decimal_number; // copying the decimal_number for
                                            // showing it in the output later

  while (decimal_number > 0) {

    int reminder = decimal_number % 2;   // calculating reminders
    decimal_number = decimal_number / 2; // updating decimal_number

    ans += (reminder * pow);
    pow = pow * 10;
  }
  cout << "\nThe Binary number of the Decimal number" << copy_decimal_number
       << " is: " << ans << endl;
  return 0;
}
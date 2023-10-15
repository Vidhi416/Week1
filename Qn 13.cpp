// Recursive function to calculate the sum of digits
#include <iostream>
using namespace std;

int sum(int number) {
  // If the number is a single digit, return the number itself
  if (number >= 0 && number <= 9)
    return number;

  // Recursive case: Calculate the sum of the last digit and the sum of the rest of the digits
  return (number % 10) + sum(number / 10);
}

int main() {
  int n;
  cout << "Input a number: ";
  cin >> n;
  int sum_digits = sum(n);
  cout<<"Sum of digits of " << n << " is: " << sum_digits <<endl;
    return 0;
}


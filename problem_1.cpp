#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int limit = 1000;

  for (int i = 1; i < limit; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  cout << "Sum of multiples of 3 or 5 below 1000 is " << sum << endl;
  return 0;
}

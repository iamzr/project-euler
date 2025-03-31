#include <iostream>
using namespace std;

int main() {
  int limit = 4'000'000;

  int a = 0;
  int b = 1;
  int sum = 0;

  while (b < limit) {
    if (b % 2 == 0) {
      sum += b;
    }
    int next = a + b;
    a = b;
    b = next;
  }

  cout << sum << endl;
  return 0;
}

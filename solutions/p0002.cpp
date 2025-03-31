#include <iostream>
using namespace std;

int main() {
  constexpr int limit = 4'000'000;

  int a = 0, b = 1, sum = 0;

  while (b < limit) {
    if (b % 2 == 0) {
      sum += b;
    }
    int next = a + b;
    a = b;
    b = next;
  }

  cout << sum << "\n";
  return 0;
}

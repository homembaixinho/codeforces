// 996A - Hit the Lottery

#include <iostream>
using namespace std;

int v[5] = {100, 20, 10, 5, 1};
int n, m, k, i=0;

int main() {
  cin >> n;

  while (n > 0) {
    if (n >= v[i]) {
      k = n/v[i];

      n -= v[i] * k;
      m += k;
    } else {
      i++;
    }
  }

  cout << m << endl;
}

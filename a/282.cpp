// 282A - Bit++

#include <iostream>
#include <string>
using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x=0;
  cin >> n;

  string op;
  while (n--) {
    cin >> op;
    x += (op[1] == '+' ? 1 : -1);
  }

  cout << x << endl;
}

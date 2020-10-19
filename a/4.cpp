// 4A - Watermelon

#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  int w;
  cin >> w;

  cout << (w % 2 || w <= 2 ? "NO" : "YES") << endl;
}

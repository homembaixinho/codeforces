// 231A - Team

#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, ans = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int m = 0, f;

    for (int j = 0; j < 3; j++) {
      cin >> f;
      m += f;
    }

    if (m >= 2) ans++;
  }

  cout << ans << endl;
}

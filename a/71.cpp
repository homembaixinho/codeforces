// 71A - Way Too Long Words

#include <iostream>
#include <string>

using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  string w;
  while (n--) {
    cin >> w;

    if (w.size() > 10) cout << w[0] << w.size() - 2 << w.back() << endl;
    else cout << w << endl;
  }
}

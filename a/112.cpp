// 112A - Petya and Strings

#include <iostream>
#include <string>

using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string a, b;
  cin >> a >> b;

  for (int i = 0; i < a.size(); i++) {
    char ai = tolower(a[i]);
    char bi = tolower(b[i]);

    if (ai < bi) {
      cout << -1 << endl;
      return 0;
    } else if (bi < ai) {
      cout << 1 << endl;
      return 0;
    }
  }

  cout << 0 << endl;
}

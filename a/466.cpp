// 466A - Cheap Travel

#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, a, b;
  cin >> n >> m >> a >> b;

  if (a*m < b)
    cout << a * n << endl;
  else {
    int r = (n%m) * a;
    if (r > b)
      cout << n/m * b + b << endl;
    else
      cout << n/m * b + r << endl;
  }
}

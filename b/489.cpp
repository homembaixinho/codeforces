// 489B - BerSU Ball

#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;
#define endl "\n"
#define maxn 101

int n, m, a[maxn], b[maxn], ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> m;
  for (int i = 0; i < m; i++)
    cin >> b[i];

  sort(a, a+n);
  sort(b, b+m);

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (abs(a[i] - b[j]) <= 1) {
        b[j] = -1;
        ans++;
        break;
      }

  cout << ans << endl;
}

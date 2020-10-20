// 492B - Vanya and Lanterns

#include <iostream>
#include <algorithm>

using namespace std;
#define endl "\n"
#define maxn 1001

int n, l, a[maxn], ans;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> l;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a, a+n);
  ans = max(a[0], l - a[n-1]) * 2;

  for (int i = 0; i < n-1; i++)
    ans = max(ans, a[i+1] - a[i]);

  cout.precision(10); cout << fixed;
  cout << (double) ans/2 << endl;
}

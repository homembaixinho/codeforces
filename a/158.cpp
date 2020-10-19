// 158A - Next Round

#include <iostream>
using namespace std;
#define endl "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k, a[50];
  cin >> n >> k;

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = n-1; i >= 0; i--)
    if (a[i] >= a[k-1] && a[i] > 0) {
      cout << i+1 << endl;
      return 0;
    }

  cout << 0 << endl;
}

#include <bits/stdc++.h>
using namespace std;

int a[9];
int n = 9, r = 7;

void solve() {
  int sum = 0;

  for (int i = 0; i < r; i++) {
    sum += a[i];
  }

  if (sum == 100) {
    sort(a, a + 7);
    for (int i = 0; i < r; i++) cout << a[i] << "\n";
    exit(0);
  }

  return;
};

void permutation(int n, int r, int depth) {
  if (r == depth) {
    solve();
    return;
  }

  for (int i = depth; i < n; i++) {
    swap(a[i], a[depth]);
    permutation(n, r, depth + 1);
    swap(a[i], a[depth]);
  }

  return;
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 9; i++) {
    cin >> a[i];
  }

  permutation(n, r, 0);
}
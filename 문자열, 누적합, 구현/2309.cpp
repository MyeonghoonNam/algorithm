// permutation
#include <bits/stdc++.h>
using namespace std;

int a[9];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < 9; i++) {
    cin >> a[i];
  }

  sort(a, a + 9);

  do {
    int sum = 0;

    for (int i = 0; i < 7; i++) {
      sum += a[i];
    }

    if (sum == 100) break;

  } while (next_permutation(a, a + 9));

  for (int i = 0; i < 7; i++) {
    cout << a[i] << "\n";
  }

  return 0;
}

// permutation with recursive
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

// combination with nested loop (N : 1~3개 범위에 활용)
#include <bits/stdc++.h>
using namespace std;

int a[9];
int n = 9, r = 7, sum;
vector<int> v;
pair<int, int> ret;

void solve() {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (sum - a[i] - a[j] == 100) {
        ret = {i, j};
        return;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  solve();

  for (int i = 0; i < n; i++) {
    if (ret.first == i || ret.second == i) continue;
    v.push_back(a[i]);
  }

  sort(v.begin(), v.end());

  for (int i : v) cout << i << "\n";

  return 0;
}
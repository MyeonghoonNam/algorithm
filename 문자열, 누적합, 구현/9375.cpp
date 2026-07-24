#include <bits/stdc++.h>
using namespace std;

int T, N;
string a, b;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> T;

  while (T--) {
    cin >> N;
    map<string, int> mp;
    int ret = 1;

    for (int i = 0; i < N; i++) {
      cin >> a >> b;
      mp[b]++;
    }

    for (auto c : mp) {
      ret *= c.second + 1;
    }

    ret--;

    cout << ret << "\n";
  }

  return 0;
}
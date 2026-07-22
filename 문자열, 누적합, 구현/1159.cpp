#include <bits/stdc++.h>
using namespace std;

int N;
int cnt[26];
string s, ret;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> s;
    cnt[s[0] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (cnt[i] >= 5) {
      ret += (i + 'a');
    }
  }

  if (ret.size()) {
    cout << ret;
  } else {
    cout << "PREDAJA";
  }

  return 0;
}
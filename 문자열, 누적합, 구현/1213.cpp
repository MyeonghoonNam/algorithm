// 문자별 카운트 배열 활용
// 문자 카운트가 홀수인 문자가 2개 이상이면 팰린드롬 불가
// 알파벳 높은 순차부터 이어 붙이기 진행

#include <bits/stdc++.h>
using namespace std;

string S, ret;
int cnt[91], flag;
char mid;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> S;

  for (char c : S) {
    cnt[c]++;
  }

  for (int i = 'Z'; i >= 'A'; i--) {
    if (cnt[i] & 1) {
      mid = char(i);
      cnt[i]--;
      flag++;
    }

    if (flag == 2) break;

    for (int j = 0; j < cnt[i]; j += 2) {
      ret = char(i) + ret;
      ret += char(i);
    }
  }

  if (mid) {
    ret.insert(ret.begin() + ret.size() / 2, mid);
  }

  if (flag == 2) {
    cout << "I'm Sorry Hansoo";
  } else {
    cout << ret;
  }

  return 0;
}
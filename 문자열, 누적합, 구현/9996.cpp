#include <bits/stdc++.h>
using namespace std;

int N, pos;
string p, s, pre, suf;

// 문자열 find 함수를 통한 특정 문자 인덱스 반환
// 문자열 substr을 통한 문자열 분리
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  cin >> p;

  pos = p.find('*');
  pre = p.substr(0, pos);
  suf = p.substr(pos + 1);

  for (int i = 0; i < N; i++) {
    cin >> s;

    if (pre.size() + suf.size() > s.size()) {
      cout << "NE" << "\n";
    } else {
      if (pre == s.substr(0, pre.size()) &&
          suf == s.substr(s.size() - suf.size())) {
        cout << "DA" << "\n";
      } else {
        cout << "NE" << "\n";
      }
    }
  }

  return 0;
}
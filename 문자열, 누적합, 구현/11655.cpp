#include <bits/stdc++.h>
using namespace std;

string s;

// getline을 통한 공백 포함 전체 한 줄 입력
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 65 && s[i] < 91) {
      // 대문자
      if (s[i] + 13 > 90) {
        s[i] = s[i] + 13 - 26;
      } else {
        s[i] = s[i] + 13;
      }
    } else if (s[i] >= 97 && s[i] < 123) {
      // 소문자
      if (s[i] + 13 > 122) {
        s[i] = s[i] + 13 - 26;
      } else {
        s[i] = s[i] + 13;
      }
    }

    cout << s[i];
  }

  return 0;
}
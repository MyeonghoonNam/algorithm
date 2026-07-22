#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int s, e;
int cnt[104];
int ret;

// 시간의 시작과 끝은 이상~미만의 범위로 계산한다.
// 전체 순회가 가능한 경우 특정 카운트를 배열을 활용하여 계산
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> A >> B >> C;

  for (int i = 0; i < 3; i++) {
    cin >> s >> e;

    for (int j = s; j < e; j++) {
      cnt[j]++;
    }
  }

  for (int i = 1; i < 100; i++) {
    if (!cnt[i]) continue;

    if (cnt[i] == 1) {
      ret += A;
    } else if (cnt[i] == 2) {
      ret += B * 2;
    } else if (cnt[i] == 3) {
      ret += C * 3;
    }
  }

  cout << ret;

  return 0;
}
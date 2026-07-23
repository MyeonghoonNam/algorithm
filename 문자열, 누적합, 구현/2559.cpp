// 연속된 기간의 온도의 합이 최대가 되는 값 : 구간합 활용
// 최소, 최대 값을 구하기 위해선 항상 최솟값, 최대값 주의

#include <bits/stdc++.h>
using namespace std;

int N, K, temp, psum[100004], ret = -100000004;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> K;

  for (int i = 1; i <= N; i++) {
    cin >> temp;
    psum[i] = psum[i - 1] + temp;
  }

  for (int i = K; i <= N; i++) {
    ret = max(ret, psum[i] - psum[i - K]);
  }

  cout << ret;

  return 0;
}
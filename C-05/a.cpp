#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> point;
const int INF = 1e9;

int main() {
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for(int t = 0; t < T; t++) {
    point pminx = make_pair(INF, INF);
    int miny = INF;

    int N, M;
    cin >> N >> M;
    for(int x = 0; x < N; x++) {
      string s;
      cin >> s;
      for(int y = 0; y < M; y++) {
        if(s[y] == 'R') {
          pminx = min(pminx, make_pair(x, y));
          miny = min(miny, y);
        }
      }
    }
    if(pminx.second == miny) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
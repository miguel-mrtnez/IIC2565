#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int t;
  cin >> t;

  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int found = false;
    for(int j = 0; j < n - 1; j++) {
      if(s[j] != s[j + 1]) {
        cout << j + 1 << " " << j + 2 << endl;
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "-1 -1" << endl;
    }
  }

  return 0;
}
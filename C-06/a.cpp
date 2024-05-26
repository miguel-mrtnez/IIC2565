#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  
  int T, N, counter;
  string s;
  cin >> T;

  for (int t = 0; t < T; t++)
  {
    cin >> N;
    cin >> s;
    counter = 0;
    for (int i = 0; i < N; i++)
    {
      int num = s[i] - '0';
      counter += num;
      if (num != 0)
      {
        counter++;
      }
    }
    if (s[N - 1] != '0')
    {
      cout << counter - 1 << endl;
    }
    else
    {
      cout << counter << endl;
    }
  }
  
  return 0;
}
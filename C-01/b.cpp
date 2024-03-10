#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int n;
  string str_nums;
  cin >> n;
  getline(cin >> ws, str_nums);

  vector<int> nums;
  stringstream ss(str_nums);

  int num;
  while (ss >> num) {
    nums.push_back(abs(num));
  }

  int min = nums[0];
  for (int i = 1; i < n; i++) {
    if (nums[i] < min) {
      min = nums[i];
    }
  }
  cout << min << endl;
  
  return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    ll totSum = n * (n + 1) / 2;
    ll currSum = 0;
    vector<ll> nums;
    for (int i = 0; i < n; i++) {
      ll curr;
      cin >> curr;
      nums.push_back(curr);
      currSum += curr;
    }
    nums.push_back(totSum - currSum);
    k = k % (n + 1);
    for (int i = 0; i < n; i++) {
      cout << nums[(i - k + n + 1) % (n + 1)] << " ";
    }
    cout << endl;
  }
}



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve() {
    ll n,q;
    cin>>n>>q;
    ll arr[n];
    for(ll i = 0; i < n; i++) {
    cin>>arr[i];
    }
    ll brr[q];
    for(ll i = 0; i < q; i++){
         cin >> brr[i];
    }
    set<ll>st;
    for(ll i = 0; i < q; i++) {
        if(st.count(brr[i])) 
          continue;
        st.insert(brr[i]);
        for(ll j = 0; j < n; j++) {
            if(arr[j] % (1 << brr[i]) == 0) 
              arr[j] += (1 << (brr[i] - 1));
        }
    }
    for(auto i : arr) cout << i << " ";
    cout << '\n';
 
}
int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n; i++){
        cin >> y[i];
    }
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > y[i])
        {
            a.push_back((x[i] - y[i]));
        }
        else
        {
            b.push_back((y[i] - x[i]));
        }
    }
    int ans = 0, leftover = 0;
    if (b.size() != 0){
        leftover = b.size();
    }
    if (a.size() != 0){
        sort(a.rbegin(), a.rend());
    }
    if (b.size() != 0){
        sort(b.begin(), b.end());
    }
    int i = 0;
    int j = (b.size() - 1);
    while (i < a.size() && j >= 0)
    {
        if (a[i] <= b[j])
        {
            leftover--;
            ans++;
            j--;
            i++;
        }
        else
        {
            i++;
        }
    }
    ans += (leftover / 2);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

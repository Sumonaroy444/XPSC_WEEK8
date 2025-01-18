#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    bool turtle = true, piggy = false;
    while (a.size() > 1)
    {
        if (turtle)
        {
            auto it = a.begin();
            a.erase(it);
            turtle = false;
            piggy = true;
        }
        else if (piggy)
        {
            auto it = a.end()-1;
            a.erase(it);
            turtle = true;
            piggy = false;
        }
    }
    cout << a[0] << '\n';
}
}

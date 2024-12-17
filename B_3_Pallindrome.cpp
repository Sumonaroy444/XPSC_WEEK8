#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    for (int i=0; i<n; i++) {
        if (i % 4 == 0 || i % 4 == 1) {
            s+= 'a';
        }
         else {
            s+= 'b';
        }
    }
    cout <<s<< endl;
}


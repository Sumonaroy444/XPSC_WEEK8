#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>diff(n-1);
        for(int i=0;i<n-1;i++){
            diff[i] = abs(a[i]-a[i+1]);
        }
        int ans=INT_MAX;
        if(n>=2){ // alice first element choose korle
            ans = min(ans,diff[0]);
        }
        if(n>=2){ // alice last element choose korle
            ans = min(ans,diff[n-2]);
        }
        for(int i=1;i<n-1;i++){ // alice middle theke index choose korle
            int max_diff = max(diff[i],diff[i-1]);
             ans = min(ans,max_diff);
        }
        cout<<ans<<endl;
    }
}


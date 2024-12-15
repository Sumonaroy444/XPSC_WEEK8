#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one_cnt=0,zero_cnt =0;
        for(int i=0;i<n;i++){
            if(s[i]== '1')
              one_cnt++;
            else
              zero_cnt++;
        }
        int min_pair= min(zero_cnt,one_cnt);
        if(min_pair%2 == 0)
           cout<<"Ramos"<<endl;
        else
          cout<<"Zlatan"<<endl;
    }
}


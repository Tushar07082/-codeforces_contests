#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> s(n),f(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        vector<int> ans(n);
        ans[0] = f[0]-s[0];
        for(int i=1;i<n;i++){
            s[i] = max(s[i],f[i-1]);
            ans[i] = f[i] - s[i];
            if(ans[i]<0){
                ans[i] = 0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
  
    }

    return 0;
}
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
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n);
        vector<pair<ll,ll>>pv;

        for(int i=0;i<n;i++){
            cin>>v[i];
            pv.push_back({v[i]%k,i});
        }
        sort(pv.begin(),pv.end());
        ll ans =0;
        ll i=0,j=n-1;
        while(i<n-1){
            ll a = pv[i].first;
            ll b = pv[i].second;
            ll c = pv[i+1].first;
            ll d = pv[i+1].second;
            ans += (v[b]+v[d])/k;
            i+=2;
            j--;
        }
        cout<<ans<<endl;
  
    }

    return 0;
}
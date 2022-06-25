#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
bool compare(pair<int,int> a,pair<int,int> b){
        if(a.first > b.first){
                return true;
        }else if(a.first == b.first && a.second > b.second){
                return true;
        }
        return false;
}
int main(){
  
    int t; cin>>t;
    while(t--){
            ll n,k;
            cin>>n>>k;
            vector<ll> a;
            vector<pair<ll,ll>> b;
        //     int ans = 0;
            for(ll i=0;i<n;i++){
                    ll x;
                    cin>>x;
                    
                    a.push_back(x+i);
            }
            sort(a.begin(),a.end());
            ll ans = 0;
            for(ll i=0;i<n-k;i++){
                    ans+= a[i]-i;
            }
            cout<<ans<<endl;
            

    }

    return 0;
}
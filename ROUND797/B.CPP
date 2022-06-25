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
        vector<ll> a(n);
        ll maxi1 = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi1 = max(maxi1,a[i]);
        }
        vector<ll> b(n);
        ll maxi2 = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>b[i];
            maxi2 = max(maxi2,b[i]);
        }
        // cout<<maxi1<<" "<<maxi2<<endl;
        bool ab = false;
        ll k = maxi1 - maxi2;
        if(k < 0){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<n;i++){
            a[i] -= k;
            if(a[i] < 0){
                a[i] =0;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                ab = true;
            }
        }
        if(ab){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }

  
    }

    return 0;
}
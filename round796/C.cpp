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
            vector<ll> a(n);
            int j = 0;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(i != 0 && a[i] > a[j]){
                            j = i;
                    }
            }
            ll x =0;
            ll ans =0;
            if(k<n){
                    int i=0,j=0;
                    while(j<n){
                            if(j-i+1 < k){
                                   x += a[j];
                                    j++;
                                   
                            }else{
                                    x += a[j];
                                //     cout<<x<<endl;
                                    ans = max(ans,x);
                                    x -= a[i];
                                    i++;
                                    j++;
                            }
                    }
                //     cout<<ans<<endl;
                    ans += k*(k-1)/2;
            }else{
                    
            }
            
            cout<<ans<<endl;

  
    }

    return 0;
}
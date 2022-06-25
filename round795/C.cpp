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
            string s;
            cin>>s;
            ll a = -1,b=-1;
            for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                            a = i;
                            break;
                    }
            }
            for(int i=n-1;i>=0;i--){
                    if(s[i]=='1'){
                            b = i;
                            break;
                    }
            }
        //     cout<<a<<" "<<b<<endl;
            ll ans =0;
            bool f = true;
            if(n-1-b <= k && b!=-1){
                    swap(s[n-1],s[b]);
                    k -= n-1-b;
                        f = false;
            }
            if(a<=k && a!=-1 && (f||a!=b)){
                    swap(s[0],s[a]);
            }
            for(int i=0;i<n-1;i++){
                ans += (s[i]-'0')*10 + (s[i+1]-'0');
           }
            cout<<ans<<endl;

    }

    return 0;
}
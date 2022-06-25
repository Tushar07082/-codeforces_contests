#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                vector<int> a(n);
                unordered_map <int,int> mp;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        mp[a[i]]++;
                }
                int maxi = 0;
                int x;
                if(n==1){
                        cout<<0<<endl;
                        continue;
                }
                if(mp.size()==1){
                        cout<<0<<endl;
                        continue;
                }
                for(auto i:mp){
                        if(maxi < i.second){
                                maxi = i.second;
                                x = i.first;
                        }
                }
                // cout<<maxi<<endl;
                int y = maxi;
                int rem = n-maxi;
                int ans = 1;
                while(y*2 <= rem){
                        ans += y;
                        rem -= y;
                        y = y*2;
                        
                        ans++;

                }
                if(y < rem){
                        ans++;
                }
                ans += rem;
                cout<<ans<<endl;
        }
}
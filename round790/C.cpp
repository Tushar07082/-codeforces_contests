#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
int diff(string a,string b){
        int ans = 0;
        for(int i=0;i<a.size();i++){
                ans += abs(a[i]-b[i]);
        }
        return ans;
}
int main(){
  
    int t; cin>>t;
    while(t--){
            int n,m;
            cin>>n>>m;
            vector<string> s(n);
            for(int i=0;i<n;i++){
                    cin>>s[i];
            }
            int ans = INT_MAX;
            for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                            ans = min(ans, diff(s[i],s[j]));
                    }
            }
            cout<<ans<<endl;

    }

    return 0;
}
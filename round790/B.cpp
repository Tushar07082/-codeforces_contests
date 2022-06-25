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
            int n;
            cin>>n;
            vector<int> a(n);
            int mini = INT_MAX;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    mini = min(mini,a[i]);

            }
            int ans = 0;
            for(int i=0;i<n;i++){
                    ans += a[i] - mini;
            }
            cout<<ans<<endl;
    }

    return 0;
}
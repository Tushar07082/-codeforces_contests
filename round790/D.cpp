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
            int n,m;
            cin>>n>>m;
            vvi mat(n,vi(m));
            for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                            cin>>mat[i][j];
                    }
            }
            unordered_map <ll,ll> m1;
            unordered_map <ll,ll> m2;
            for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                            m1[i+j] += mat[i][j];
                            m2[i-j] += mat[i][j];
                    }
            } 
        //     for(auto i:m2){
        //             cout<<i.first<<" "<<i.second<<endl;
        //     }
            long long ans = 0;
              for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                            ll x = m1[i+j] + m2[i-j] - mat[i][j];
                            if(x>ans){
                                    ans = x;
                                //     cout<<i<<" "<<j<<endl;
                            }
                    }
            }  
            cout<<ans<<endl;

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
int solve(vvi &a, int i,int j, vector<vector<vector<int>>> &dp,int k){
        int n = a.size();
        int m = a[0].size();
        if(i>=n || j>=m)
            return 0;
        
        if(a[i][j]==1)
            k++;
        else
            k--;
        
        if(i==n-1 && j==m-1)
            return (k==0);
        
        if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        
        return dp[i][j][k]=(solve(a, i+1, j,dp, k) | solve(a, i, j+1, dp,k));
}

int main(){
  
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        cin>>a[i][j];
                }
        }
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(100000,-1)));
        if(!solve(a,0,0,dp,0)==0){
                cout<<"YES\n";
        }else{
                cout<<"NO\n";
        }
  
    }

    return 0;
}
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
            vector<string> s(n);
            int minix = INT_MAX;
            int miniy = INT_MAX;
                for(int i=0;i<n;i++){
                        cin>>s[i];
                        
                }
                if(s[0][0] == 'R'){
                        cout<<"YES\n";
                        continue;
                }
                bool a = false;
                bool ans = false;
                for(int i=0;i<n;i++){
                        for(int j=0;j<m;j++){
                                if(s[i][j] == 'R' && a == false){
                                        a = true;
                                        minix = j;
                                }else if(s[i][j] == 'R' && a==true && j < minix){
                                        ans = true;
                                }
                        }
                }
                if(ans){
                        cout<<"NO\n";
                }else{
                        cout<<"YES\n";
                }
                
    }

    return 0;
}
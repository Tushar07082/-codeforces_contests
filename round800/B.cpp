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
        string s;
        cin>>s;
        ll ans = n;
        for(int i=1;i<n;i++){
                if(s[i]=='1' && s[i-1]=='0'){
                        ans += i;
                }else if(s[i]=='0' && s[i-1]=='1'){
                        ans += i;
                }
        }
        cout<<ans<<endl;
  
    }

    return 0;
}
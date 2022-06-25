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
            string s = to_string(n);
            int ans = INT_MAX;
            if(s.size()==2){
                    ans = s[1] - '0';
            }else{
                    for(int i=0;i<s.size();i++){
                            if(s[i]-'0' < ans){
                                    ans = s[i] - '0';
                            }
                    }
            }
            cout<<ans<<endl;
    }

    return 0;
}
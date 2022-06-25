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
            string s;
            cin>>s;
            if(s[0]+s[1]+s[2] == s[3]+s[4]+s[5]){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
    }

    return 0;
}
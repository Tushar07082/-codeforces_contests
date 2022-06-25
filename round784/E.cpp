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
            unordered_map <char,long long> a;
            unordered_map <char,long long> b;
            unordered_map <string,long long> c;
            unordered_map<char,long long> mp;
            for(int i=0;i<n;i++){
                    string s;
                    cin>>s;
                    if(s[0]==s[1]){
                            mp[s[0]]++;
                    }else{
                            a[s[0]]++;
                            b[s[1]]++;
                            c[s]++;
                    }
                    

            }
            long long ans = 0;
            for(auto i:c){
                    ans -= i.second*(i.second-1);
            }
            for(auto i:a){
                    ans += i.second*(i.second-1)/2;
            }
            for(auto i:b){
                    ans += i.second*(i.second-1)/2;
            }
            for(auto i:mp){
                    ans += i.second * a[i.first];
                    ans += i.second * b[i.first];
            }
            cout<<ans<<endl;
            



    }

    return 0;
}
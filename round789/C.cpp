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
            vector<int> p(n);
            vector<pair<int,int>> s1;
            vector<pair<int,int>> s2;
            for(int i=0;i<n;i++){
                    cin>>p[i];
            }
            for(int i=0;i<n;i++){
                     for(int j=i+2;j<n;j++){
                             if(p[j] > p[i]){
                                     s1.push_back({i,j});
                             }
                     }
             }
             for(int i=0;i<n;i++){
                     for(int j=i+2;j<n;j++){
                             if(p[j] < p[i]){
                                     s2.push_back({i,j});
                             }
                     }
             }
             int ans = 0;
             for(int i=0;i<s1.size();i++){
                     for(int j=0;j<s2.size();j++){
                             if(s1[i].first < s2[j].first && s2[j].first < s1[i].second && s1[i].second < s2[j].second){
                                     ans++;
                             }else if(s2[j].first > s1[i].second){
                                     break;
                             }
                     }
             }
        //      for(int i=0;i<s1.size();i++){
        //              for(int j=s1[i].first+1;j<s1[i].second;j++){
        //                      for(int k=s1[i].second+1;k<n;k++){
        //                              if(p[j] > p[k]){
        //                                      ans++;
        //                              }
        //                      }
        //              }
        //      }
             cout<<ans<<endl;

    }

    return 0;
}
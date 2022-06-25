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
            unordered_map <int,int> mp;
            for(int i=0;i<n;i++){
                    int a;
                    cin>>a;
                    mp[a]++;
            }
            int x = -1;
            for(auto i: mp){
                    if(i.second >=3){
                            x = i.first;
                            break;
                    }
            }
            cout<<x<<endl;
    }

    return 0;
}
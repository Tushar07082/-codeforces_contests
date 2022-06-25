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
            int n,k;
            cin>>n>>k;
            vi a(n);
            map <ll,ll> mp;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    mp[a[i]]++;
            }
            map<ll,ll>mp2;
            for(auto i:mp){
                    if(i.second >= k){
                            mp2[i.first] = i.second;
                    }
            }
            int l = -1,r=-1,ltemp = -1,rtemp= -1;
            for(auto i:mp2){
                    if(ltemp==-1){
                            ltemp = i.first;
                            rtemp = i.first;
                    }else if(i.first == rtemp+1){
                            rtemp = i.first;
                    }else{
                            if(rtemp - ltemp > r - l || l==-1){
                                    l = ltemp;
                                    r = rtemp;
                                    
                            }
                            ltemp = i.first;
                        rtemp = i.first;
                    }
            }
            if(rtemp - ltemp > r - l){
                                    l = ltemp;
                                    r = rtemp;
                                    ltemp = -1;
                                    rtemp = -1;
        }
        if(l==-1){
                cout<<-1<<endl;
        }else 
        cout<<l<<" "<<r<<endl;
    }

    return 0;
}
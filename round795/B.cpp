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
            vector<int> a(n);
            map<int,int> mp;
            int j = -1;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    mp[a[i]]++;
            }
            bool ab = false;
            for(auto i:mp){
                    if(i.second ==1){
                            ab = true;
                            break;
                    }
            }
            if(ab){
                    cout<<-1<<endl;
            }else{
                    int x = a[0];
                    vector<int> ans(n);
                    int j=0;
                    for(int i=1;i<n;i++){
                            if(a[i] == x){
                                    ans[i] = i;
                                    
                            }else{
                                    x = a[i];
                                    ans[j] = i;
                                    j = i;
                            }
                    }
                    ans[j] = n;
                for(int i=0;i<n;i++){
                        cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
  
    }

    return 0;
}
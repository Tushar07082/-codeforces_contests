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
            vector<int> v(n);
            map<int,int> mp;
            bool a = true;
            for(int i=0;i<n;i++){
                    cin>>v[i];
                    mp[v[i]]++;
                    if(mp[v[i]] > n/2 && n%2 == 0){
                            a = false;
                    }
            }
            if(n%2==1 || !a){
                    cout<<"NO\n";
            }else{
                    
                        vector<int> ans(n);
                        sort(v.begin(),v.end());
                        vector<int> a;
                        vector<int> b;
                        for(int i=0;i<n/2;i++){
                                a.push_back(v[i]);
                        }
                        for(int i=n/2;i<n;i++){
                                b.push_back(v[i]);
                        }
                        int j=0,k=0;
                        for(int i=0;i<n;i++){
                                if(i%2==0){
                                        ans[i] = a[j];
                                        j++;
                                }else{
                                        ans[i] = b[k];
                                        k++;
                                }
                        }
                        bool abc = true;
                        for(int i=1;i<n-1;i++){
                                if(ans[i] > ans[i-1] && ans[i] > ans[i+1]){
                                        continue;
                                }else if(ans[i] < ans[i-1] && ans[i] < ans[i+1]){
                                        continue;
                                }else{
                                        abc = false;
                                }
                        }
                        if(!(ans[n-1] > ans[n-2] && ans[n-1] > ans[0] || ans[n-1] < ans[n-2] && ans[n-1] < ans[0] ))abc = false;
                        if(abc){
                                cout<<"YES\n";
                                for(int i=0;i<n;i++){
                                        cout<<ans[i]<<" ";
                                }
                                cout<<endl;

                        }else{
                                cout<<"NO\n";
                        }
                        

                    
            }
            
    }

    return 0;
}
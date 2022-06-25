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
        //     map<int,int> mp;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                //     mp[a[i]]++;
            }
            sort(a.begin(),a.end());
            int sum = accumulate(a.begin(),a.end(),0);
            bool ab = false;
            vector<double> avg(n);
            for(int i=0;i<n;i++){
                    avg[i] = (double)(sum - a[i]) / (double)(n-1);
                    if(a[i] == avg[i]){
                            ab = true;
                        //     cout<<i<<endl;
                            break;
                    }
            }
            
            
            if(ab){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
    }

    return 0;
}
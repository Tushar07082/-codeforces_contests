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
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll sum = 0;
        bool y = true;
        int j = 0;
        for(int i=0;i<n;i++){
                cin>>a[i];
                sum += a[i];
                
        }
        if(sum !=0){
                cout<<"NO\n";
                continue;
        }
        int i = n-1;
        while(a[i]== 0){
                i--;
        }
        vector<ll> b(n,0);
        bool flag = false;
        while(i>0){
                if(b[i] <= a[i]){
                        flag = true;
                        break;
                }
                int x = abs(b[i] - a[i]);
                b[i] -= x;
                b[i-1] += x;
                i--;
        }
        if(a[0] != b[0]){
                flag = true;
        }
        if(flag){
                cout<<"NO\n";
        }else{
                cout<<"YES\n";
        }
        
    }
    return 0;
}
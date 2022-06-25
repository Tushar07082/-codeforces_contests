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
            ll a,b,c;
            cin>>a>>b>>c;
            ll z = c;
            ll y = z + b;
            ll x = y + a;
            cout<<x<<" "<<y<<" "<<z<<endl;
    }

    return 0;
}
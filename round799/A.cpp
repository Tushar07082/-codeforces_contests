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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt =0;
        if(b>a){
                cnt++;
        }
        if(c>a){
                cnt++;
        }
        if(d>a){
                cnt++;
        }
        cout<<cnt<<endl;
  
    }

    return 0;
}
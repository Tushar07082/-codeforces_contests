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
            int x;
            cin>>x;
            if(x==1){
                    cout<<3<<endl;
            }else if(x%2==1){
                    cout<<1<<endl;
            }else{
                    ll y = 1;
                    while(y*2 <=x){
                            y = y*2;
                    }
                    if(y==x){
                            cout<<y+1<<endl;
                    }else{
                            cout<<(x & (-x))<<endl;
                    }

            }
  
    }

    return 0;
}
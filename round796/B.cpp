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
            vector<int>a(n);
            int count0 =0,count1=0;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(a[i]%2==1){
                            count1++;
                    }else{
                            count0++;
                    }
            }
            if(count1==n){
                    cout<<0<<endl;
            }else if(count1 >0){
                    cout<<count0<<endl;
            }else{
                   ll x=pow(2,32);
                        for(int i=0;i<n;i++){
                                ll y = (a[i]&(-a[i]));
                                if(y<x){
                                        x = y;
                                }
                        }
                        ll n = 0;
                        while(x > 1){
                                n++;
                                x = x/2;
                        }
                        cout<<n+count0-1<<endl;
            }
  
    }

    return 0;
}
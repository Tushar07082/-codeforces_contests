#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    
            ll n,q;
            cin>>n>>q;
            vector<ll> a(n);
            ll sum =0;
            for(ll i=0;i<n;i++){
                    cin>>a[i];
                    sum += a[i];
            }
            
            set<ll> s;
            bool z = false;
                    int m=-1;
            while(q--){
                    ll p;
                    cin>>p;
                    
                    if(p==1){
                            
                        ll i,x;
                        cin>>i>>x;
                        if(z==true){
                                if(s.find(i) != s.end()){
                                        sum = sum + x-a[i-1];
                                        a[i-1] = x;
                                }else{
                                        sum = sum + x-m;
                                        a[i-1] = x;  
                                }
                                s.insert(i);
                        }else{
                                sum = sum + x-a[i-1];
                                a[i-1] = x;

                        }
                            
                            
                            
                            cout<<sum<<endl;
                    }else{
                            ll x;
                            cin>>x;
                            sum = n*x;
                            cout<<sum<<endl;
                            z = true;
                            m = x;
                            s.clear();
                    }
            }
    

    return 0;
}
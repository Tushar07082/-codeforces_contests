#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> v(n);
                for(int i=0;i<n;i++){
                        cin>>v[i];
                }
                sort(v.begin(),v.end(),greater<int>());
                long long x = v[0];
                long long y = v[n-1];
                y += v[n-2];
                if(x> y){
                        cout<<"YES\n";
                        continue;
                }
                long long i;
                for(i=1;i<n/2;i++){
                       x += v[i];
                       y += v[n-2-i];
                       if(x>y){
                               cout<<"YES\n";
                               break;
                       } 
                }
                if(i==n/2){
                        cout<<"NO\n";
                }
                
        }
        
}
#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                if(n==1){
                        cout<<1<<endl;
                        continue;
                }
                if(n%2==1){
                        n= n+1;
                }
                long long ans = n/2;
                cout<<ans<<endl;
        }
}
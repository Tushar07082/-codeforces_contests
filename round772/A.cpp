#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                long long a[n];
                long long ans = 0;
                for(long long i=0;i<n;i++){
                        cin>>a[i];
                        ans = ans|a[i];
                }
                cout<<ans<<endl;
        }
}
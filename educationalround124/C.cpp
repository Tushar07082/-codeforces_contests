#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                vector<int> a(n);
                vector<int> b(n);
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                for(int j=0;j<n;j++){
                        cin>>b[j];
                }
                int ans,tempans = INT_MAX;
                for(int i=0;i<n;i++){
                        tempans = min(tempans, abs(a[0]-b[i]));
                }
                ans += tempans;
                for(int i=0;i<n;i++){
                        tempans = min(tempans, abs(a[n-1]-b[i]));
                }
                ans += tempans;
                for(int i=0;i<n;i++){
                        tempans = min(tempans, abs(a[i]-b[0]));
                }
                ans += tempans;
                for(int i=0;i<n;i++){
                        tempans = min(tempans, abs(a[i]-b[n-1]));
                }
                ans += tempans;
                cout<<ans<<endl;
        }
}
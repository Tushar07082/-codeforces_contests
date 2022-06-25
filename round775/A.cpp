#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<int> a(n);
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                long long ans = 0;
                int x = n-1;
                while(a[x]==1){
                        x--;
                }
                int y = 0;
                while(a[y]==1){
                        y++;
                }
                y--;
                x++;
                if(x==y || y>x){
                        cout<<0<<endl;
                        continue;
                }
                // cout<<"x: "<<x<<" y: "<<y<<endl;
                ans = x-y;
                cout<<ans<<endl;
        }
}
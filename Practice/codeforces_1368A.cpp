#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n,a,b;
                cin>>a>>b>>n;
                int count = 0;
                int x = min(a,b);
                int y = max(a,b);
                while(x<=n && y<=n){
                        x += y;
                        int temp = x;
                        x = y;
                        y = temp;
                        count++;
                }
                cout<<count<<endl;
        }
}
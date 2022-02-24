#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int a,b;
                cin>>a>>b;
                int x = min(a,b);
                int y = max(a,b);
                int side = max(2*x,y);
                cout<<side*side<<endl;
        }
}
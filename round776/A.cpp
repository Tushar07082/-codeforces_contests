#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                string s;
                char c;
                cin>>s>>c;
                int n = s.size();
                int i;
                for(i=0;i<n;i++){
                        if(s[i]==c && i%2==0 && (n-1-i)%2==0){
                                cout<<"YES\n";
                                break;
                        }
                }
                if(i==n){
                        cout<<"NO\n";
                }
        }
}
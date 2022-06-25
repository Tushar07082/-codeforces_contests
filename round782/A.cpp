#include <bits/stdc++.h>
using namespace std;
string mul(int x){
        string ans = "";
        for(int i=0;i<x;i++){
                ans += 'R';
        }
        return ans;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int m,r,b;
                cin>>m>>r>>b;
                int x = (r+b)/(b+1);
                int slots = b+1;
                string ans = "";
                string a = mul(x);
                // cout<<a<<endl;
                int j = slots;
                for(int i=0;i<slots-1;i++){
                        if(r > j){
                                ans += a;
                                r -= x;
                        }else{
                                ans += 'R';
                                r -= 1;
                        }
                        ans += 'B';
                        j--;
                }
                if(j > r){
                        ans += a;
                }else{
                        ans += mul(r);
                }
                cout<<ans<<endl;

        }
}
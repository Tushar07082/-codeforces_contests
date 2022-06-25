#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long long l,r,a;
                cin>>l>>r>>a;
                long long ans = 0;
                int x ;
                if(l==r){
                        x = r;
                }
                else if(r%a == 0){
                        x = r-1;
                }else if(r<a){
                        x = r;
                }
                else{
                        x = (r/a)*a -1;
                        if(x<l)
                                x = r;
                        
                }
                ans = max(x/a + x%a, r/a + r%a);
                
                cout<<ans<<endl;
        }
}
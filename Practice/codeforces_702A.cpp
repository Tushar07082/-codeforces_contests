#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
                cin>>a[i];
        }
        int ans = 1,currans =1;
        for(int i=1;i<n;i++){
                if(a[i]>a[i-1]){
                        currans++;
                }else{
                        ans = max(ans,currans);
                        currans = 1;
                }
        }
        ans = max(ans,currans);
        cout<<ans<<endl;
}
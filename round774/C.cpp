#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                unordered_map <long long, long long> mp;
                if(n==1 || n==2){
                        cout<<1<<endl;
                }else{
                        int x = 4, y = 6, z = 4;
                        mp[1] = 1;
                        mp[2] = 1;
                        for(int i=2;i<=n;i++){
                                if(i==x){
                                        mp[i] = 1;
                                        x = x*2;
                                        if(i==y){
                                                y = y*z;
                                                z++;
                                        }
                                }else if(y==i){
                                        mp[i] = 1;
                                        y = y*z;
                                        z++;
                                }else{
                                        mp[i] = INT_MAX;
                                        for(int j=1;j<=i;j++){
                                                mp[i] = min(mp[i],mp[j]+mp[i-j]);
                                        }
                                }
                        }
                }
                cout<<mp[n]<<endl;
        }
        

}
#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> v(n);
                for(int i=0;i<n;i++){
                        cin>>v[i];
                }
                sort(v.begin(),v.end(),greater<int>());
                if(n==1){
                        if(v[0]>1){
                                cout<<"NO\n";
                        }else{
                                cout<<"YES\n";
                        }
                }else{
                        if(v[0]>v[1]+1){
                                cout<<"NO\n";
                        }else{
                                cout<<"YES\n";
                        }
                }

        }
}
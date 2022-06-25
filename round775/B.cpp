#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> v(n);
                long long sum = 0;
                for(int i=0;i<n;i++){
                        cin>>v[i];
                        sum += v[i];
                }
                long long x = *max_element(v.begin(),v.end());
                if(x==0){
                        cout<<0<<endl;
                }else{
                        long long y = sum - x;
                        if(x<=y){
                                cout<<1<<endl;
                        }else{
                                cout<<x-y<<endl;
                        }
                }
        }
}
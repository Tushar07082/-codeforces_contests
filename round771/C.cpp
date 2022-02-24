#include <bits/stdc++.h>
using namespace std;


int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> a(n);
                long long maxi = INT_MIN;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                vector<long long> mp;
                for(int i=0;i<n;i++){
                        if(a[i]>maxi){
                                mp.push_back(a[i]);
                                maxi = a[i];
                        }else{
                                for(int j=0;j<mp.size();j++){
                                        if(mp[j] > a[i] && mp[j]<maxi){
                                                mp.erase(mp.begin()+j);
                                        }
                                }
                        }
                }
                
                cout<<mp.size()<<endl;
                
                
        }
}
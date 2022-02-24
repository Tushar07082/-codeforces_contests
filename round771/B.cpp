#include <bits/stdc++.h>
using namespace std;

int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                vector<long long> a(n);
                vector<long long> even;
                vector<long long> odd;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                        if(a[i]%2==0){
                                even.push_back(a[i]);
                        }else{
                                odd.push_back(a[i]);
                        }
                }
                int x = even.size();
                int y = n-x;
                int i;
                for(i=0;i<x-1;i++){
                        if(even[i]>even[i+1]){
                                cout<<"NO\n";
                                break;
                        }
                }
                if(i!=x-1 && x!=0){
                        continue;
                }
                for(i=0;i<y-1;i++){
                        if(odd[i]>odd[i+1]){
                                cout<<"NO\n";
                                break;
                        }
                }
                if(i==y-1 || y==0){
                        cout<<"YES\n";
                }
                
                
        }
}
#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n,s;
                cin>>n>>s;
                if(s==0){
                        cout<<0<<endl;
                }else{
                        long long x = s/(n*n);
                        cout<<x<<endl;
                }
        }
        
}
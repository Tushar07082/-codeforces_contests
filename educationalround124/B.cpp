#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t;
        cin>>t;
        while(t--){
                long long n;
                cin>>n;
                if(n>19){
                        cout<<"NO\n";
                }else{
                        cout<<"YES\n";
                        for(int i=0;i<n;i++){
                                long long x = pow(3,i);
                                cout<<x<<" ";
                        }
                        cout<<endl;
                }
        }

}
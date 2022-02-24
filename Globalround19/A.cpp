#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                int a[n];
                bool x = false;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                for(int i=1;i<n;i++){
                        if(a[i]<a[i-1]){
                                x = true;
                        }
                }
                if(x==true){
                        cout<<"YES\n";
                }else cout<<"NO\n";
        }
}
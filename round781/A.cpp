#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                if(n%2==1){
                        int c = 1;
                        int d = 1;
                        n -= 2;
                        int a = n/2;
                        int b = a+1;
                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                }else{
                        if(n==4){
                                cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
                        }else if(n%4 != 0){
                                int c = 1, d= 1;
                                n-=2;
                                int a = n/2 - 1;
                                int b = n/2 + 1;
                                cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                        }else{
                                int c = 1, d= 1;
                                n-=2;
                                int a = n/2 - 2;
                                int b = n/2 + 2;
                                cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
                        }
                }
        }
}
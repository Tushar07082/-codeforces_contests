#include <bits/stdc++.h>
using namespace std;
int main(){
        string x;
        cin>>x;
        string a[5];
        for(int i=0;i<5;i++){
                cin>>a[i];
        }
        int i;
        for(i=0;i<5;i++){
                if(x[0]==a[i][0] || x[1]==a[i][1]){
                        cout<<"YES\n";
                        break;
                }
        }
        if(i==5){
                cout<<"NO\n";
        }
        
}
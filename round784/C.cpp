#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    while(t--){
            int n;
            cin>>n;
            vi a,b;
            for(int i=0;i<n;i++){
                    int x;
                    cin>>x;
                    if(i%2==0){
                            a.push_back(x);
                    }else{
                            b.push_back(x);
                    }
            }
            int x = a[0]%2;
            int y=  b[0]%2;
            bool ans = true;
            for(int i=0;i<a.size();i++){
                    if(a[i]%2 != x){
                            ans = false;
                    }
            }
            for(int i=0;i<b.size();i++){
                    if(b[i]%2 != y){
                            ans = false;
                    }
            }
            if(ans==true){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
    }

    return 0;
}
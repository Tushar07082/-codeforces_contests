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
        string s;
        cin>>s;
        int ans = 0;
        int x = 1;
        int y = s[0];
        for(int i=1;i<n;i++){
            if(s[i]==y){
                x++;
            }else{
                if(x%2==0){
                    y = s[i];
                    x = 1;
                }else{
                    s[i] = y;
                    ans++;
                    x++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
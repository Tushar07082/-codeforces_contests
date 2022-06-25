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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=0;
        ll w=0,b=0;
        ll mini = INT_MAX;
        while(j<n){
            if(j-i+1 <= k){
                if(s[j]=='W'){
                    w++;
                }else{
                    b++;
                }
                j++;
            }else{
                mini = min(w,mini);
                if(s[i]=='W'){
                    w--;
                }else{
                    b--;
                }
                i++;
            }
        }
        mini = min(w,mini);
                if(s[i]=='W'){
                    w--;
                }else{
                    b--;
                }
                i++;
        cout<<mini<<endl;
  
    }

    return 0;
}
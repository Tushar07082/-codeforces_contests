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
            if(n==1 && s[0]!= 'W'){
                    cout<<"NO\n";
                    continue;
            }
            unordered_set <char> st;
            bool ans = true;
            for(int i=0;i<n;i++){
                    if(s[i]=='W'){
                            if(st.size()==1){
                                    ans  = false;
                                    break;
                            }else{
                                    st.clear();
                            }
                    }else{
                            st.insert(s[i]);
                    }
            }
            if(st.size()==1){
                ans  = false;
            }
            if(ans == true){
                    cout<<"YES\n";
            }else{
                    cout<<"NO\n";
            }
    }

    return 0;
}
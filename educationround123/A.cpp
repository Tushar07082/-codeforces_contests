#include <bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                string s;
                cin>>s;
                unordered_set<char>st;
                int n = s.size();
                int i;
                for(i=0;i<n;i++){
                        if(s[i]>='a' && s[i]<='z'){
                                st.insert(s[i]);
                        }else{
                                if(st.find(s[i]+32)==st.end()){
                                        cout<<"NO\n";
                                        break;
                                }
                        }
                }
                if(i==n){
                        cout<<"YES\n";
                }
        }
}
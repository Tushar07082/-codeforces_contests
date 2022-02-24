#include <iostream>
using namespace std;
int main(){
        long long n;
        cin>>n;
        string s= to_string(n);
        int i=0;
        string ans = "";
        if(s[0]=='9'){
                ans += s[0];
                i++;
        }
        
        for(;i<s.size();i++){
                if(s[i]>= '5' && s[i] <= '9'){
                        ans += 9 - (s[i]-'0') + '0'; 
                }else{
                        ans += s[i];
                }
        }
        cout<<ans<<endl;
}
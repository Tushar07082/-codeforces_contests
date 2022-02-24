#include <iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        string s[n];
        int ans = 0;
        for(int i=0;i<n;i++){
                cin>>s[i];
                if(s[i][0] == 'T'){
                        ans += 4;
                }else if(s[i][0]=='C'){
                        ans += 6;
                }else if(s[i][0]=='O'){
                        ans += 8;
                }else if(s[i][0]=='D'){
                        ans += 12;
                }else if(s[i][0]=='I'){
                        ans += 20;
                }
        }
        cout<<ans<<endl;
        
}
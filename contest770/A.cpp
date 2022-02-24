#include <iostream>
using namespace std;
bool ispalindrome(string s){
        int n = s.size();
        int i=0,j=n-1;
        while(i<=j){
                if(s[i]!=s[j]){
                        return false;
                }
                i++;
                j--;
        }
        return true;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int n,k;
                cin>>n>>k;
                string s;
                cin>>s;
                if(ispalindrome(s) || k==0){
                        cout<<1<<endl;
                }else {
                        cout<<2<<endl;
                }
        }
}
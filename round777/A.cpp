#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                if(n==1){
                        cout<<1<<endl;
                }else if(n==2){
                        cout<<2<<endl;
                }else if(n==3){
                        cout<<21<<endl;
                }else if(n==4){
                        cout<<121<<endl;
                }else if(n==5){
                        cout<<212<<endl;
                }else{
                        long long x = n/3 * 2;
                        string ans = "";
                        for(int i=0;i<x;i++){
                                if(i%2==0){
                                        ans += '2';
                                }else{
                                        ans += '1';
                                }
                        }
                        long long y = n/3 * 3;
                        for(int i=y+1;i<=n;i++){
                                if((i-y)%3 == 1){
                                        ans = to_string(1) + ans;
                                }else if((i-y)%3 == 2){
                                        string temp = ans;
                                        ans = "";
                                        for(int j=0;j<temp.size();j++){
                                                if(temp[j]=='1'){
                                                        ans += '2';
                                                }else{
                                                        ans += '1';
                                                }
                                        }
                                }
                        }
                        cout<<ans<<endl;
                }
        }
}
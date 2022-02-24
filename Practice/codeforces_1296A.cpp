#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                int odd =0;
                int even =0;
                for(int i=0;i<n;i++){
                        int a;
                        cin>>a;
                        if(a%2==1){
                                odd++;
                        }else{
                                even++;
                        }
                }
                if(odd%2 ==1 ){
                        cout<<"YES\n";
                }else if(even>0 && odd>0){
                        cout<<"YES\n";
                }else{
                        cout<<"No\n";
                }
        }
        
}
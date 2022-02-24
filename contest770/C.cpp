#include <iostream>
#include <vector>
using namespace std;

int main(){
        int t;
        cin>>t;
        while(t--){
                int n,k;
                cin>>n>>k;
                vector<vector<int>>ans;
                if(n==1 && k==1){
                        cout<<"YES\n";
                        cout<<1<<endl;
                        continue;
                }else{
                        int x = 1,y=2;
                        int i;
                        for(i=0;i<n;i++){
                                vector<int> temp;
                                int j;
                                for(j=0;j<k;j++){
                                        if(i%2==0){
                                                if(x>n*k){
                                                        cout<<"NO\n";
                                                        break;
                                                }
                                                temp.push_back(x);
                                                x = x+2;
                                        }else{
                                                if(y>n*k){
                                                        cout<<"NO\n";
                                                        break;
                                                }
                                                temp.push_back(y);
                                                y = y+2;
                                        }
                                }
                                if(j<k){
                                        break;
                                }
                                ans.push_back(temp);
                        }
                        if(i<n){
                                continue;
                        }else{
                                cout<<"YES\n";
                                int i,j;
                                for(i=0;i<n;i++){
                                
                                for(j=0;j<k;j++){
                                        cout<<ans[i][j]<<" ";
                                }
                                cout<<endl;
                                
                        }
                        }
                }
        }
}
#include <iostream>
#include <vector>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                int m = 1;
                while(n/(m*10) > 0){
                        m = m*10;
                }
                vector<int> ans;
                while(m){
                        if(n/m > 0){
                                ans.push_back(n/m * m);
                        }
                        n = n%m;
                        m = m/10;
                }
                cout<<ans.size()<<endl;
                for(auto i: ans){
                        cout<<i<<" ";
                }
                cout<<endl;
        }
}
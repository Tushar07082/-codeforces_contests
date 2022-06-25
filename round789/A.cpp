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
            vector<int> a(n);
            set<int> s;
            bool zero = false;
            int nzero = 0;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    s.insert(a[i]);
                    if(a[i]==0){
                            zero = true;
                    }else{
                            nzero++;
                    }
            }
            if(zero){
                    cout<<nzero<<endl;
            }else if(s.size() != a.size()){
                    cout<<a.size()<<endl;
            }else{
                    cout<<a.size()+1<<endl;
            }
    }

    return 0;
}
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
            int l1,r1,l2,r2;
            cin>>l1>>r1>>l2>>r2;
            if(r1 >= l2 && r2>=l1){
                    cout<<max(l1,l2)<<endl;
            }else{
                    cout<<l2+l1<<endl;
            }
    }

    return 0;
}
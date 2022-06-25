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
        if(n%3==0){
            cout<<n/3<<" "<<n/3 + 1<<" "<<n/3 -1 <<endl;
        }else if(n%3==1){
            cout<<n/3<<" "<<n/3 + 2<<" "<<n/3 -1 <<endl;
        }else{
            cout<<n/3 +1 <<" "<<n/3 + 2<<" "<<n/3 -1<<endl;
        }
  
    }

    return 0;
}
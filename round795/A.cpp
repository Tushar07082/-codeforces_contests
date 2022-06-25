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
            int c1=0,c2=0;
            for(int i=0;i<n;i++){
                    cin>>a[i];
                    if(a[i]%2){
                            c1++;
                    }else{
                            c2++;
                    }
            }
            cout<<min(c1,c2)<<endl;
    }

    return 0;
}
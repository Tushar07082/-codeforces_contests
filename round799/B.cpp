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
        set<int> s;
        for(int i=0;i<n;i++){
                int x;
                cin>>x;
                s.insert(x);
        }
        int y = s.size();
        if((n-y)%2==0){
                cout<<y<<endl;
        }else{
                cout<<y-1<<endl;
        }
  
    }

    return 0;
}
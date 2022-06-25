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
        int n,m;
        cin>>n>>m;
        vvi a(n,vector<int>(m));
        int I=-1,J=-1;
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        cin>>a[i][j];
                        if(I==-1 || a[i][j] > a[I][J]){
                                I = i;
                                J = j;
                        }
                }
        }
        int x = min(n-I-1 , I);
        int y = min(m-J-1, J);
        cout<<(n-x)*(m-y)<<endl;


  
    }

    return 0;
}
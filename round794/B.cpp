#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
int countinv(vector<int> p,int i,int n){
        int inv = 0;
        for(int j = i;j<n && i<p.size();j++){
                        if(p[j] <p[i]){
                                    int x = countinv(p,i,j);
                                    inv += max(x,1);
                                    i = j;
                                    break;
                            }
                
        }
        return inv;
}
int main(){
  
    int t; cin>>t;
    while(t--){
            int n;
            cin>>n;
            vector<int> p(n);
            for(int i=0;i<n;i++){
                    cin>>p[i];
            }
            int inv =0;
            for(int i=0;i<n-1;i++){
                    if(p[i+1] < p[i]){
                            inv++;
                            i++;
                    }
            }
            cout<<inv<<endl;
    }

    return 0;
}
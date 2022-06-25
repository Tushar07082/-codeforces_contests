#include <bits/stdc++.h>
using namespace std;
bool isrectangle(int i,int j,int n,int m,vector<vector<int>> &a, int maxi,int maxj, int mini,int minj){
        if(i>=n || a[i][j] == 0){
                cout<<1<<endl;
                if(maxi != i-1){
                        return false;
                }else{
                        return true;
                }
        }
        if(j>=m || a[i][j]==0){
                cout<<2<<endl;
                if(maxj != j-1){
                        return false;
                }else{
                        return true;
                }
        }
        if(i<0 || a[i][j]==0){
                cout<<3<<endl;
                if(mini != i+1){
                        return false;
                }else{
                        return true;
                }
        }
        if(j<0 || a[i][j]==0){
                cout<<4<<endl;
                if(mini != j+1){
                        return false;
                }else{
                        return true;
                }
        }
        a[i][j] = 0;
        maxi = max(maxi,i);
        maxj = max(maxj,j);
        mini = min(mini,i);
        minj = min(minj,j);
        if(!isrectangle(i+1,j,n,m,a,maxi,maxj,mini,minj)){
                cout<<i+1<<" "<<j<<endl;
                return false;
        }
        if(!isrectangle(i,j+1,n,m,a,maxi,maxj,mini,minj)){
                cout<<i<<" "<<j+1<<endl;
                return false;
        }
        if(!isrectangle(i-1,j,n,m,a,maxi,maxj,mini,minj)){
                cout<<i-1<<" "<<j<<endl;
                return false;
        }
        if(!isrectangle(i,j-1,n,m,a,maxi,maxj,mini,minj)){
                cout<<i<<" "<<j-1<<endl;
                return false;
        }
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int n,m;
                cin>>n>>m;
                vector<vector<int>> v;
                for(int i=0;i<n;i++){
                        vector<int> temp;
                        for(int j=0;j<m;j++){
                                char a;
                                cin>>a;
                                temp.push_back(a-'0');
                        }
                        v.push_back(temp);
                }
                int i;
                int j;
                for(i=0;i<n;i++){
                        for(j=0;j<m;j++){
                                if(v[i][j]==1){
                                        if(!isrectangle(i,j,n,m,v,i,j,i,j)){
                                                cout<<i<<" "<<j<<endl;
                                                cout<<"NO\n";
                                                break;
                                        }
                                }
                                // cout<<v[i][j]<<" ";
                        }
                        if(j!=m){
                                break;
                        }
                        // cout<<endl;
                }
                if(i!=n){
                        continue;
                }
        }
}
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
            vector<vector<int>> v(n,vector<int>(m));
            for(int i=0;i<n;i++){
                    for(int j=0;j<m;j++){
                            cin>>v[i][j];
                    }
            }
            int x = -1, y=-1;
            int l = 0;
            bool a = false;
            for(int i=0;i<n;i++){
                    for(int j=1;j<m;j++){
                            if(v[i][j] < v[i][j-1] ){
                                    if(y==-1){
                                            int a = j-1;
                                            while(a>0 && v[i][a] == v[i][a-1])a--;
                                            x = a;
                                            while(j<m-1 && v[i][j] == v[i][j+1])j++;
                                            y = j;
                                            l++;
                                    }else if(l<2){
                                            y = j;
                                            l++;
                                    }else{
                                        //     cout<<i<<" "<<j<<endl;
                                            a = true;
                                    } 
                                    
                            }
                    }
                    if( x != -1){
                            break;
                    }
                    
            }
            if(a){
                    cout<<-1<<endl;
                    continue;
            }
            if(x==-1){
                    cout<<1<<" "<<1<<endl;
                    continue;
            }
            a = false;
            for(int i=0;i<n;i++){
                    int temp = v[i][x];
                    v[i][x] = v[i][y];
                    v[i][y] = temp;
            }
            for(int i=0;i<n;i++){
                    for(int j=1;j<m;j++){
                            if(v[i][j] < v[i][j-1]){
                                    a = true;
                                    break;
                            }
                    }
                    if(a){
                            break;
                    }
            }
            if(a){
                    cout<<-1<<endl;
            }else{
                    cout<<x+1<<" "<<y+1<<endl;
            }
    }

    return 0;
}

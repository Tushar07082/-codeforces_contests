#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int n,q;
    cin>>n>>q;
    unordered_map <int,int> s1;
    unordered_map<int,int> s2;
    while(q--){
            int t;
            cin>>t;
            if(t==1){

                    int x,y;
                    cin>>x>>y;
                    s1[x] = 1;
                    s2[y] = 1;
            }else if(t==2){
                    int x,y;
                    cin>>x>>y;
                    s1[x] = 0;
                    s2[y] = 0;
                    
            }else{
                    int x1,y1,x2,y2;
                    cin>>x1>>y1>>x2>>y2;
                    if(s1.size() < x2-x1+1 && s2.size() < y2-y1+1){
                            cout<<"NO\n";
                    }else{
                            int i=0,j;
                            if(s1.size()>=x2-x1+1){
                                    for(i=x1;i<=x2;i++){
                                            if(s1[i] == 0){
                                                    break;
                                            }
                                    }
                                    if(i==x2){
                                            cout<<"YES\n";
                                    }
                            }
                            if(s2.size() >= y2 - y1+1){
                                    for(j=y1;j<=y2;j++){
                                            if(s2[j] == 0 && i!= x2){
                                                    cout<<":"<<j<<endl;
                                                    cout<<"NO\n";
                                                    break;
                                            }
                                    }
                                    if(j==y2 && i!=x2){
                                            cout<<"YES\n";
                                    }
                            }
                            

                    }
            }
    }

    return 0;
}
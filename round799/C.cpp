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
        string s[8];
        for(int i=0;i<8;i++){
                cin>>s[i];
        }
        // int x = -1,y=-1;
        map<int,int> mp;
        map<int,int>mp2;
        for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                        if(s[i][j]=='#'){
                                mp[i+j]++;
                                mp2[i-j]++;
                        }
                }
                
        } 
        int x=-1 , y=-1;
        int maxi1 = -1,maxi2 = -1;
        for(auto i: mp){
                if(i.second > maxi1){
                        maxi1 = i.second;
                        x = i.first;
                }
        }
        // cout<<x<<endl;
        for(auto i: mp2){
                if(i.second > maxi2){
                        maxi2 = i.second;
                        y = i.first;
                }
        }
        // cout<<y<<endl;
        int X = (x+y)/2;
        int Y = x - X;
        cout<<X+1<<" "<<Y+1<<endl;
  
    }

    return 0;
}
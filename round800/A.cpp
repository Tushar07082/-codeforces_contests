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
        int a,b;
        cin>>a>>b;
        string s = "";
        int x,y;
        string n,m;
        if(a>b){
                x = a;
                y = b;
                n = "0";
                m = "1";
        }else{
                x = b;
                y = a;
                m = "0";
                n = "1";
        }
        while(x > 0 && y > 0){
                s += n;
                s += m;
                x--;y--;
        }
        while(x>0){
                s += n;
                x--;
        }
        while(y>0){
                s += m;
                y--;
        }
        cout<<s<<endl;
    }

    return 0;
}
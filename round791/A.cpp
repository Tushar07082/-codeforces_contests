#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    ll t; cin>>t;
    while(t--){
            ll n;
            cin>>n;
            ll a = 1;
            if(n%2==1 || n<4){
                    cout<<-1<<endl;
            }else{
                    if(n%4==0 && n%6==0){
                            cout<<n/6<<" "<<n/4<<endl;
                    }else if(n%4==2 && n%6 == 0){
                            cout<<n/6<<" "<<n/4<<endl;
                    }else if(n%4==0 && n%6==2){
                            cout<<n/6 + a<<" "<<n/4<<endl;
                    }else if(n%4==2 && n%6==2){
                            cout<<n/6 + a<<" "<<n/4<<endl;
                    }else if(n%4==0 && n%6==4){
                            cout<<n/6+a<<" "<<n/4<<endl;
                    }else if(n%4==2 && n%6==4){
                            cout<<n/6+a<<" "<<n/4<<endl;
                    }
                    
            }
    }

    return 0;
}
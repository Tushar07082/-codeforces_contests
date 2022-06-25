#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    int i=1;
    while(i<=t){
            int n;
            cin>>n;
            deque<int> dq;
            for(int j=0;j<n;j++){
                    int x;
                    cin>>x;
                    dq.push_back(x);
            }
            int prev = 0;
            int ans = 0;
            while(!dq.empty()){
                    if(dq.front() >= prev && dq.back() >= prev){
                            if(dq.front() < dq.back()){
                                    prev = dq.front();
                                //     cout<<dq.front()<<endl;
                                    dq.pop_front();
                                    ans++;
                            }else{
                                // cout<<dq.back()<<endl;
                                 prev = dq.back();
                                dq.pop_back();
                                ans++;   
                            }
                    }else if(dq.back() >= prev){
                                // cout<<dq.back()<<endl;
                            prev = dq.back();
                            dq.pop_back();
                            ans++;
                    }else if(dq.front() >= prev){
                                // cout<<dq.front()<<endl;
                            prev = dq.front();
                            dq.pop_front();
                            ans++;
                    }else{
                            break;
                    }

            }
            cout<<"Case #"<<i<<": "<<ans<<endl;
            i++;
    }

    return 0;
}
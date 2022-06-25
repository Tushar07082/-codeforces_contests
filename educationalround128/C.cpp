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
            string s;
            cin>>s;
            deque<pair<char,int>> dq;
            int count0 = 0;
            vector<int> v1(s.size());
            vector<int> v2(s.size());
            int m = INT_MAX;
            for(int i=0;i<s.size();i++){
                    if(s[i]=='0'){
                            count0++;
                            v1[i] = 0;
                            m = i;
                    }else{
                            if(m==INT_MAX){
                                    v1[i] = m;
                            }else v1[i] = i-m;
                    }
                    dq.push_back({s[i],i});
            }
        //     for(int i=0;i<v1.size();i++){
        //             cout<<v1[i]<<" ";
        //     }
        //     cout<<"\n";
        //     cout<<s<<endl;
            m =INT_MAX;
            for(int j=v1.size()-1;j>=0;j--){
                    if(s[j]=='0'){
                            v2[j] = 0;
                            m = j;
                    }else{
                            if(m==INT_MAX){
                                    v2[j] = m;
                            }else v2[j] = m-j;
                    }
                //     cout<<v1[j]<<" ";
            }
        //     cout<<endl;
            int x = 0;
        //     for(int i=0;i<v1.size();i++){
        //             cout<<v1[i]<<" ";
        //     }
        //     cout<<endl;
        //     for(int i=0;i<v2.size();i++){
        //             cout<<v2[i]<<" ";
        //     }
        //     cout<<endl;
        //     cout<<x<<" "<<count0<<endl;
            while(!dq.empty() && x < count0){
                //     cout<<x<<" "<<count0<<endl;
                    while(!dq.empty() && dq.front().first == '0'){
                            count0--;
                            dq.pop_front();
                    }
                //     cout<<x<<" "<<count0<<endl;
                    while(!dq.empty() && dq.back().first == '0'){
                            count0--;
                            dq.pop_back();
                    }
                //     cout<<x<<" "<<count0<<endl;
                    if(!dq.empty() && dq.front().first == '1' && dq.back().first=='1' && x <  count0){
                            if(v2[dq.front().second] < v1[dq.back().second]){

                                    x++;
                                    dq.pop_front();
                            }else{
                                    x++;
                                    dq.pop_back();
                            }
                    }
                    while(!dq.empty() && dq.front().first == '0'){
                            count0--;
                            dq.pop_front();
                    }
                //     cout<<x<<" "<<count0<<endl;
                    while(!dq.empty() && dq.back().first == '0'){
                            count0--;
                            dq.pop_back();
                    }
                    if(!dq.empty() &&dq.front().first=='1' && x < count0){
                            x++;
                            dq.pop_front();
                    }
                    while(!dq.empty() && dq.front().first == '0'){
                            count0--;
                            dq.pop_front();
                    }
                //     cout<<x<<" "<<count0<<endl;
                    while(!dq.empty() && dq.back().first == '0'){
                            count0--;
                            dq.pop_back();
                    }
                    if(!dq.empty() &&dq.back().first=='1' && x < count0){
                            x++;
                            dq.pop_back();
                    }
                    
            }
            cout<<max(count0,x)<<endl;
    }

    return 0;
}
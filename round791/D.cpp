#include <bits/stdc++.h>
using namespace std;

int calculate(vector<int> a[], int i ,map<int,int> &mp){
    if(a[i].empty()){
        return 1;
    }
    int ans = 1;
    for(int j=0;j<a[i].size();j++){
        if(mp.find(a[i][j]) != mp.end()){
            ans += mp[a[i][j]];
        }else{
            mp[a[i][j]] = calculate(a,a[i][j],mp);
            ans += mp[a[i][j]]; 
        }
    }
    return mp[i] = ans;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> vec[n+1];
	    map<int,int> mp1;
	    for(int i=0;i<n-1;i++){
	        int u,v,x;
	        cin>>u>>v>>x;
	        vec[u].push_back(v);
	        mp1[v] = x;
	    }
	    map<int,int> mp2;
	    for(int i=1;i<=n;i++){
	        if(mp2.find(i) == mp2.end()){
	            mp2[i] = calculate(vec,i,mp2);
	        }
	    }
            vector<int> a;
            for(auto i:mp2){
                //     cout<<i.first<<" "<<i.second<<endl;
                    if(mp1[i.first] == 1){
                            a.push_back(i.second);
                    }
            }
            int i=0;
            int x = n-k;
            sort(a.begin(),a.end(),greater<int>());
            for( i=0;i<a.size();i++){
                //     cout<<a[i]<<" ";
                x -= a[i];
                    if(x<=0){
                           break; 
                    }
                    
            }
            if(i==a.size()){
                    cout<<-1<<endl;
            }else{
                    cout<<i+1<<endl;
            }
	    
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin >> t;
        while (t--)
        {
                int n;
                cin>>n;
                vector<int> v(n);
                unordered_map <int,int> mp;
                for(int i=0;i<n;i++){
                        cin>>v[i];
                        mp[v[i]]++;
                }
                int x = mp.size();
                for(int i=1;i<=n;i++){
                        if(i<=x){
                                cout<<x<<" ";
                        }else{
                                cout<<x+1<<" ";
                                x++;
                        }
                }
                cout<<endl;
        }
}
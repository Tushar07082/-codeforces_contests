#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    int x =0;
    while(x<t){
            long long n;
            cin>>n;
            long long X,Y;
            cin>>X>>Y;
                long long sum = n*(n+1)/2;
                if((X*sum)%(X+Y)){
                        cout<<"Case #"<<x+1<<": "<<"IMPOSSIBLE"<<endl;
                }else{
                        cout<<"Case #"<<x+1<<": "<<"POSSIBLE"<<endl;
                        long long Z = (X*sum)/(X+Y);
                        vector<long long> a;
                        long long sum =0;
                        if(Z<=n){
                            a.push_back(Z);
                        }else{
                            for(int i=n;i>0;i--){
                                
                                if(sum + i <= Z){
                                        a.push_back(i);
                                        sum += i;
                                }
                            }
                            if(Z-sum>0){
                                a.push_back(Z-sum);
                            }
                            
                        }
                        sort(a.begin(),a.end());
                        cout<<a.size()<<endl;
                        for(int i=0;i<a.size();i++){
                            cout<<a[i]<<" ";
                        }
                        
                        
                        cout<<endl;
                }
            x++;
    }

    return 0;
}
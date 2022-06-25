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
            int n,q;
            cin>>n>>q;
            vi b(n),x(q);
            for(int i=0;i<n;i++){
                    cin>>b[i];
            }
            for(int j=0;j<q;j++){
                    cin>>x[j];
            }
            sort(b.begin(),b.end(),greater<int>());
            for(int i=1;i<b.size();i++){
                    b[i] = b[i]+b[i-1];
            }
        //     for(int i=0;i<a.size();i++){
        //             cout<<a[i]<<" ";
        //     }
            for(int i=0;i<q;i++){
                    int start = 0, end = b.size()-1;
                        int ans = -1;
                        while(start <= end){
                                int mid = start + (end - start)/2;
                                if(b[mid] == x[i]){
                                        ans = mid+1;
                                        break;
                                }else if(b[mid] > x[i]){
                                        ans = mid+1;
                                        end = mid-1;
                                }else{
                                        start = mid+1;
                                }
                        }
                        cout<<ans<<endl;
            }
    }
 
    return 0;
}
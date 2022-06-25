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
            int n;
            cin>>n;
            vi w(n);
            long long ans = 0;
            long long a = 0;
            long long b = 0;
            long long i = 0;
            long long j = n-1;
            for(int i=0;i<n;i++){
                    cin>>w[i];
            }
            while(i<j){
                    if(a==b){
                            ans  = i + n-1-j;
                            a += w[i];
                            b += w[j];
                            i++;j--;
                    }else if(a<b){
                            a += w[i];
                            i++;
                    }else{
                            b += w[j];
                            j--;
                    }
            }
            if(a==b){
                            ans  = i + n-1-j;
                }else if(a<b){
                        a += w[i];
                            i++;
                            if(a==b){
                            ans  = i + n-1-j;
                            a += w[i];
                            b += w[j];
                            i++;j--;
                    }
                }else {
                        b += w[j];
                            j--;
                            if(a==b){
                            ans  = i + n-1-j;
                            a += w[i];
                            b += w[j];
                            i++;j--;
                    }
                }
            cout<<ans<<endl;
    }

    return 0;
}
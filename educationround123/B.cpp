#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;
        cin>>n;

        vi a(n);
        for(int i=0;i<n;i++){
            a[i] = n-i;
        }


        for(auto it : a)cout<<it<<" ";
        cout<<"\n";
        for(int i = 0; i < n-1; i++){

            swap(a[i], a[i+1]);
            for(auto it : a)cout<<it<<" ";
            swap(a[i], a[i+1]);
            cout<<"\n";
        }
    }
 
    return 0;
}
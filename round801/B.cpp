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
        vector<int> a(n);
        int min1 = INT_MAX, min2 = INT_MAX;
        int i1,i2;
        for(int i=0;i<n;i++){
                cin>>a[i];
                if(i%2==1){
                        if(a[i] < min2){
                                min2 = a[i];
                                i2 = i;
                        }
                }else{
                        if(a[i] < min1){
                                min1 = a[i];
                                i1 = i;
                        }
                }
        }
        if(n%2==1){
                cout<<"Mike\n";
        }else if(min1  > min2){
                cout<<"Mike\n";
        }else if(min1 < min2){
                cout<<"Joe\n";
        }else if(i1 < i2){
                cout<<"Joe\n";
        }else{
                cout<<"Mike\n";
        }
  
    }

    return 0;
}
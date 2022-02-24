#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &a, int i,int j){
        while(i<j){
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
                i++;
                j--;
        }
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                vector<int> a(n);
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                vector<int> b = a;
                sort(b.begin(),b.end());
                int i=0;
                while(i<n){
                        if(b[i]!=a[i]){
                                break;
                        }
                        i++;
                }
                int j=i;
                while(j<n && a[j]!=b[i]){
                        j++;
                }
                reverse(a,i,j);
                for(int i=0;i<n;i++){
                        cout<<a[i]<<" ";
                }
                cout<<"\n";
        }
}
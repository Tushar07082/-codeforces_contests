#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main(){
        cin.tie(0);
        cout.tie(0);
        long long p;
        cin>>p;
        while(p--){
                long long n,x;
                long long y;
                cin>>n>>x>>y;
                vector<long long> a(n);
                long long sum =0;
                for(long long i=0;i<n;i++){
                        cin>>a[i];
                        sum += a[i];
                }
                if((sum + x+ y)%2 == 0){
                        cout<<"Alice\n";
                }else{
                        cout<<"Bob\n";
                }
        }
}
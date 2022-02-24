#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                int a[n];
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                if(n==3){
                        if(a[1]%2 == 0){
                                cout<<a[1]/2<<endl;
                        }else{
                                cout<<-1<<endl;
                        }
                }else{
                        long long sum =0;
                        bool x= false;
                        for(int i=1;i<n-1;i++){
                                if(a[i]!= 1){
                                        x = true;
                                }
                                if(a[i]%2==0){
                                        sum += (long long)(a[i])/2;
                                }else{
                                        sum += (long long)(1+a[i])/2;
                                }
                        }
                        if(x==false){
                                cout<<-1<<endl;
                        }else{
                                cout<<sum<<endl;
                        }
                }
        }
}
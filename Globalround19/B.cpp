#include <iostream>
#include <vector>
using namespace std;
void printSubArrays(vector<int> arr, int start, int end,int &c,int &c0){      
    if (end == arr.size())
        return;
    else if (start > end)
        printSubArrays(arr, 0, end + 1,c,c0);
    else
    {
        for (int i = start; i <= end; i++){
            if(arr[i]==0){
                    c0++;
            }else{
                    c++;
            }
        }
        printSubArrays(arr, start + 1, end,c,c0);
    }
     
    return;
}
int main(){
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                vector<int>a(n);
                bool x = false;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                int c0=0,c=0;
                printSubArrays(a,0,0,c,c0);
                cout<<c + 2*c0<<endl;
        }
}
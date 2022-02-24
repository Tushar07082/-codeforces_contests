#include <iostream>
using namespace std;
int main(){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        int a = max(x1,max(x2,x3));
        int b = min(x1,min(x2,x3));
        int x = (a-b);
        cout<< x<<endl;
        
}
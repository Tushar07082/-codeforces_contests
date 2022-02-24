#include <iostream>
using namespace std;
int main(){
        int n,k,l,c,d,p,nl,np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        int totalfriends = n;
        int drink = k*l;
        int slices = c*d;
        int x = min(p/np,min(slices,drink/nl));
        cout<<(x/n);
        
}
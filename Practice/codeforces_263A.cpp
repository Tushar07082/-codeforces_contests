#include <iostream>
using namespace std;
int main(){
        int I,J;
        for(int i=1;i<=5;i++){
                for(int j=1;j<=5;j++){
                        int a;
                        cin>>a;
                        if(a==1){
                                I = i;
                                J = j;
                        }
                }
        }
        cout<< abs(I-3) + abs(J-3)<<endl;
}
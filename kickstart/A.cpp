#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>

int main(){
  
    int t; cin>>t;
    int x=0;
    while(x<t){
            int n;
            cin>>n;
            string s;
            cin>>s;
            bool a=false;
            bool A=false;
            bool sp=false;
            bool num=false;
            for(int i=0;i<n;i++){
                    if(s[i]>='a' && s[i] <= 'z'){
                            a = true;
                    }else if(s[i] >= '0' && s[i] <= '9'){
                            num = true;
                    }else if(s[i] >= 'A' && s[i] <= 'Z'){
                            A = true;
                    }else{
                            sp = true;
                    }
            }
            if(!a){
                    s += 'a';
            }
            if(!A){
                    s += 'A';
            }
            if(!sp){
                    s += '@';
            }
            if(!num){
                    s += '1';
            }
            while(s.size() < 7){
                    s += '1';
            }
            cout<<"Case #"<<x+1<<": "<<s<<endl;
        x++;
    }

    return 0;
}
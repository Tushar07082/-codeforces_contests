#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int cnt = 0,h=0;
        while (cnt <= n)
	{
		h++;
		cnt += (h*(h+1))/2;
	}
        cout<<h-1<<endl;
}
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans = a&b;
        ans = (a^ans)+(b^ans);
        cout<<ans<<"\n";
    }
    return 0;

}
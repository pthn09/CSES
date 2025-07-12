#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,a,b;
    cin>>t;
    while (t--){
        cin>>a>>b;
        if ((a+b)%3==0&&b*2>=a&&a*2>=b) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    s+='@';
    int d=0,ans=0;
    for (int i=0;i<s.size();i++)
        if (s[i]==s[i+1]) d++;
        else {
            ans=max(ans,d+1);
            d=0;
        }
    cout<<ans;
}

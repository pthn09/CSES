#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
int t,m;
void dfs (int u,int par,int s){
    for (auto v:a[u])
        if (v!=par) dfs(v,u,s+1);
    if (s>m) m=s,t=u;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for (int i=2,x,y;i<=n;i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,-1,0);
    dfs(t,-1,0);
    cout<<m;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
long long d[200003],S[200003],n,sz[200003];
void dfs (int u,int par,int D){
    d[u]=D;
    sz[u]=1;
    for (auto v:a[u])
        if (v!=par) {
            dfs(v,u,D+1);
            sz[u]+=sz[v];
        }
}
void dfs1 (int u,int par){
    for (auto v:a[u])
        if (v!=par) {
            S[v]=S[u]-sz[v]*2+n;
            dfs1(v,u);
        }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=2,x,y;i<=n;i++){
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,-1,0);
    for (int i=1;i<=n;i++) S[1]+=d[i];
    dfs1(1,-1);
    for (int i=1;i<=n;i++) cout<<S[i]<<' ';
}

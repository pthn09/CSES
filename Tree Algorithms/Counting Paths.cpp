#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
int p[200003][20],n,h[200003],P[200003];
void dfs (int u,int par){
    for (auto v:a[u])
        if (v!=par) {
            p[v][0]=u;
            h[v]=h[u]+1;
            dfs(v,u);
        }
}
void dfs2 (int u,int par){
    for (auto v:a[u])
        if (v!=par) {
            dfs2(v,u);
            P[u]+=P[v];
        }
}
void init (){
    for (int j=1;j<=18;j++)
        for (int i=1;i<=n;i++)
            p[i][j]=p[p[i][j-1]][j-1];
}
int LCA (int u,int v){
    if (h[u]<h[v]) swap(u,v);
    int H=h[u]-h[v];
    for (int i=log2(H);i>=0;i--)
        if (H>=(1<<i)) u=p[u][i],H-=(1<<i);
    if (u==v) return u;
    for (int i=log2(h[u]);i>=0;i--)
        if (p[u][i]!=p[v][i]) u=p[u][i],v=p[v][i];
    return p[u][0];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q,x,y;
    cin>>n>>q;
    for (int i=2;i<=n;i++) {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1,-1);
    init();
    while (q--){
        cin>>x>>y;
        P[x]++;
        P[y]++;
        int l=LCA(x,y);
        P[l]--;
        P[p[l][0]]--;
    }
    dfs2(1,-1);
    for (int i=1;i<=n;i++) cout<<P[i]<<' ';
}

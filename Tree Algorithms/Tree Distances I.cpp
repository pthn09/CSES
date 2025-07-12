#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
int d1[200003],t,m,d2[200003];
void dfs (int u,int par,int s,int d[]){
    d[u]=s;
    for (auto v:a[u])
        if (v!=par) dfs(v,u,s+1,d);
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
    dfs(1,-1,0,d1);
    m=0;
    dfs(t,-1,0,d1);
    m=0;
    dfs(t,-1,0,d2);
    for (int i=1;i<=n;i++) cout<<max(d1[i],d2[i])<<' ';
}

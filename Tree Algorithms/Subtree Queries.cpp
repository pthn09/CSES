#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+3;
#define ll long long
vector<int> e[N];
ll val[N],d=0,in[N],out[N],a[N],st[4*N];
void dfs (int u,int par){
    in[u]=++d;
    a[d]=val[u];
    for (auto v:e[u])
        if (v!=par) dfs(v,u);
    out[u]=d;
}
void update (int id,int l,int r,int i,int v){
    if (i<l||r<i) return;
    if (l==r) {
        st[id]=a[i]=v;
        return;
    }
    int m=(l+r)/2;
    update(id*2,l,m,i,v);
    update(id*2+1,m+1,r,i,v);
    st[id]=st[id*2]+st[id*2+1];
}
ll get (int id,int l,int r,int u,int v){
    if (v<l||r<u) return 0;
    if (l>=u&&v>=r) return st[id];
    int m=(l+r)/2;
    return get(id*2,l,m,u,v)+get(id*2+1,m+1,r,u,v);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,q;
    cin>>n>>q;
    for (int i=1;i<=n;i++) cin>>val[i];
    for (int i=2;i<=n;i++) {
        int x,y;
        cin>>x>>y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    dfs(1,-1);
    for (int i=1;i<=n;i++) update(1,1,n,i,a[i]);
    while (q--){
        int type,s,x;
        cin>>type;
        if (type==1){
            cin>>s>>x;
            update(1,1,n,in[s],x);
        }
        else {
            cin>>x;
            cout<<get(1,1,n,in[x],out[x])<<'\n';
        }
    }
}

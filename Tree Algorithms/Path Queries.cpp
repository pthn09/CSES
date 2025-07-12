#include<bits/stdc++.h>
using namespace std;
const int N = 2*1e5+3;
#define ll long long
vector<int> e[N];
ll val[N],d,in[N],st[4*N],D[N],out[N],lazy[4*N];
void dfs (int u,int par){
    in[u]=++d;
    D[u]+=val[u];
    for (auto v:e[u])
        if (v!=par) {
            D[v]+=D[u];
            dfs(v,u);
        }
    out[u]=d;
}
void down (int id,int l,int r){
    if (lazy[id]!=0){
        int m=(l+r)/2;
        lazy[id*2]+=lazy[id];
        st[id*2]+=(ll)(m-l+1)*lazy[id];
        lazy[id*2+1]+=lazy[id];
        st[id*2+1]+=(ll)(r-m)*lazy[id];
        lazy[id]=0;
    }
}
void update (int id,int l,int r,int u,int v,ll value){
    if (v<l||r<u) return;
    if (u<=l&&r<=v) {
        st[id]+=(ll)(r-l+1)*value;
        lazy[id]+=value;
        return;
    }
    int m=(l+r)/2;
    down(id,l,r);
    update(id*2,l,m,u,v,value);
    update(id*2+1,m+1,r,u,v,value);
    st[id]=st[id*2]+st[id*2+1];
}
ll get (int id,int l,int r,int u,int v){
    if (v<l||r<u) return 0;
    if (l>=u&&v>=r) return st[id];
    int m=(l+r)/2;
    down(id,l,r);
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
    for (int i=1;i<=n;i++) update(1,1,n,in[i],in[i],D[i]);
    while (q--){
        int type,s;
        ll x;
        cin>>type;
        if (type==1){
            cin>>s>>x;
            update(1,1,n,in[s],out[s],x-val[s]);
            val[s]=x;
        }
        else {
            cin>>x;
            cout<<get(1,1,n,in[x],in[x])<<'\n';
        }
    }
}

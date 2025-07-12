#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
int res=0;
bool vst[200003];
void dfs (int u,int par){
    for (auto v:a[u])
        if (v!=par){
            dfs(v,u);
            if (!vst[v]&&!vst[u]) {
                res++;
                vst[v]=1,vst[u]=1;
            }
        }
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
    dfs(1,-1);
    cout<<res;
}

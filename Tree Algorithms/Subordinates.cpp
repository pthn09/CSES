#include<bits/stdc++.h>
using namespace std;
vector<int> a[200003];
int dp[200003];
void dfs (int u,int par){
    dp[u]=1;
    for (auto v:a[u])
        if (v!=par){
            dfs(v,u);
            dp[u]+=dp[v];
        }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for (int i=2,x;i<=n;i++){
        cin>>x;
        a[x].push_back(i);
        a[i].push_back(x);
    }
    dfs(1,-1);
    for (int i=1;i<=n;i++) cout<<dp[i]-1<<' ';
}

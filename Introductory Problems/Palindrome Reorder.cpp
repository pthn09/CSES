#include <bits/stdc++.h>
using namespace std;
int a[91];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++) a[int(s[i])]++;
    int c=0;
    for (int i=65;i<=90;i++){
        if (a[i]%2==1) c++;
        if (c==2) return cout<<"NO SOLUTION",0;
    }
    char k;
    for (int i=65;i<=90;i++)
        if (a[i]%2==0)
            for (int j=1;j<=a[i]/2;j++) cout<<char(i);
        else c=a[i],k=char(i);
    for (int j=1;j<=c;j++) cout<<k;
    for (int i=90;i>=65;i--)
        if (a[i]%2==0)
          for (int j=1;j<=a[i]/2;j++) cout<<char(i);
}

#include<bits/stdc++.h>
int main() {
    int n;
    cin>>n;
    vector<int>ar(n,0);
    for(int i=0;i<n/2;i++)
    {
        ar[i]=i+1;
        ar[n-1-i]=-(i+1);
    }
    for(auto x:ar)
    {
        cout<<x<<" ";
    }
        
}

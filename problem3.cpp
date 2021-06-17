#include<bits/stdc++.h>
// Recursive Function
// Constraints for capacity and no of items is'nt provided
unordered_map<string ,int>memo;
int optimal(vector<int>weights,vector<int>value,int knapCap,int pos)
{  
    if(knapCap<0)return INT_MIN;
    if(pos==0)
    {
        return 0;
    }
    string current=to_string(knapCap)+"$"+to_string(pos);
    if(memo.find(current)!=memo.end())return memo[current];
    
    return memo[current] = max(
                value[pos-1]+optimal(weights,value,knapCap-weights[pos-1],pos-1) ,
                optimal(weights,value,knapCap,pos-1)
              );
}


int main() {
    int n;
    cin>>n;  // total items
    vector<int>weights(n);
    vector<int>value(n);
    for(int i=0;i<n;i++)cin>>weights[i];
    for(int i=0;i<n;i++)cin>>value[i];
    int knapCap;cin>>knapCap;
    int res=optimal(weights,value,knapCap,n);
    cout<<res<<"\n";
}

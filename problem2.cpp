#include<bits/stdc++.h>
int main() {
    int n;
    cin>>n;  // total items
    vector<int>price(n);
    for(int i=0;i<n;i++)cin>>price[i];
    int k ; 
    cin>>k; //robot guess
    int amount;
    cin>>amount; // customer's money
    int possible=0;
    for(auto x:price)
    {
        if(x<=amount)possible++;
        
    }
    if(k>possible)
    {
        cout<<"Wrong\n";//when customer can't buy more than possible items but robot is saying he can choose from k items
        
    }
    else
    {
        cout<<"Right\n";
    }
}

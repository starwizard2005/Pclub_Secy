#include <iostream>
#include <vector>
using namespace std;

int f(int i, vector <int> &a, vector <int> &dp){

    if(i >= a.size()) return i - a.size();
    if(dp[i] != -1) return dp[i];
    int not_choose = a[i] + f(i+1, a, dp);
    int choose = a[i] + f(i+a[i]+1, a, dp);

    return dp[i] = min(choose, not_choose);
}

int main(){
    int n;
    cin>>n;
    vector <int>a(n);
    for (int i = 0;i<n;i++)
        cin>>a[i];
    vector<int> dp(n, -1);
    cout<<f(0, a, dp)<<'\n';
    return 0;
}
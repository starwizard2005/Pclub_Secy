#include <iostream>
#include <vector>
using namespace std;
int mx = 0;
int f(int i, vector <int> &a, vector <int> &dp){

    if(i > a.size()) return mx;
    if (i == a.size()) return 0;
    if(dp[i] != -1) return dp[i];
    int not_choose = a[i] + f(i+1, a, dp);
    int choose = a[i] + f(i+a[i]+1, a, dp);
    dp[i] = min(choose, not_choose);

    return dp[i];
}

int main(){
    int n;
    cin>>n;
    vector <int>a(n);
    for (int i = 0;i<n;i++)
        cin>>a[i];
    vector<int> dp(n, -1);
    
    for (int i = 1;i < n;i++){
        if (a[i] > mx)
            mx = a[i];
    }
    cout<<f(0, a, dp)<<'\n';
    return 0;
}

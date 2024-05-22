This problem is a game of time complexity. After reading the problem, the first observation that we have is that the cost from a given index is indirectly related to the indexes ahead of it. Hence f(n) is related to f(n-a), a being some constant. This gives us the idea of recursion. <br/>
Now, we also notice that at a given index we have two choices, to advance by the value of that index+1 or by 1. To get the lowest cost we should prefer the minimum out of two. Assuming f(x) is the function that tells us the minimum cost from a particular index till the end of the array, we have f(x) = min[f(x + 1) , f(x + a[x] + 1)] where a denotes our array. <br/>
A crucial observation is that for a given index this minimum value will always be a constant and instead of always evaluating this for every different path we take, we can store this at every step. In other words, we are implementing dynamic programming. This step reduces our time complexity from O($\2^n$) to O($\n^2$). 
<br/>For this purpose, we create an array dp, where dp[i] stores the minimum energy that is required to go from the ith index to the end of the array, and we have dp[i] = min(f(x+1),f(x + a[x]+ 1)). Now our answer will be dp[0](we have to consider the full array)
and we are done with the problem

**Time Complexity** -  O($\n^2$)

**Solution Code** 

<br/>
``` #include <iostream>
#include <vector>
using namespace std;

int f(int i, vector <int> &a, vector <int> &dp){

    if(i >= a.size()) return i - a.size();
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
    cout<<f(0, a, dp)<<'\n';
    return 0;
}```

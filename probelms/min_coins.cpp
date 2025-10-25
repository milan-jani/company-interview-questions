#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int coinchange(vector<int>& coins, int amount) {
    int n = coins.size();
   const int INF = 1e9;

    vector<vector<int>> ans(n+1, vector<int>(amount+1, INF));
    
    for(int i=0;i<=n;i++){
        ans[i][0] = 0;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1] <= j){
                ans[i][j] = min(ans[i-1][j], 1 + ans[i][j - coins[i-1]]);
            } else {
                ans[i][j] = ans[i-1][j];
            }
        }
    }
    return ans[n][amount];


}
int main(){
    vector<int> coins={1,5,6,8};
    int amount=9;
    cout<<coinchange(coins,amount);

}
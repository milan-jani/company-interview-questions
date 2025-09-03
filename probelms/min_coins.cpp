#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int coinchange(vector<int>& coins, int amount) {
        vector<vector<int>> ans(coins.size()+1,vector<int>(amount+1,0));
        for(int j=0;j<=amount;j++) {
            for(int i=0;i<=coins.size();i++) {
                if(j<coins[i]){
                    ans[i,j]=ans[i-1]
                }
                else{
                    ans[i][j]=min(1+)//pending
                }

            }
        }


}
int main(){
    vector<int> coins={1,5,6,8};
    int amount=11;
    cout<<coinchange(coins,amount);

}
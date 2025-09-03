#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int lcs(string s1,int m,string s2,int n){
    //int arr[m+1][n+1];
    vector<vector<int>> arr(m+1,vector<int>(n+1,0));
    
    for(int i=0; i<=m; i++) arr[i][0] = 0;
    for(int j=0; j<=n; j++) arr[0][j] = 0;
    for(int i=1;i<=m;i++){
        for(int j=1 ; j<=n;j++){
            if(s1[i-1]==s2[j-1])  arr[i][j] = arr[i-1][j-1] + 1;
            
             else    arr[i][j] = max(arr[i][j-1], arr[i-1][j]);
            
        }
    }
    return arr[m][n];
}


int main(){
    string s1;
    cin>>s1;
    int m=s1.length();
    string s2;
    cin>>s2;
    int n=s2.length();
   cout<< lcs(s1,m,s2,n)<<endl;
  
    return 0;
    
}
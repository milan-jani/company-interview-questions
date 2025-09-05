#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vii;

void rev(vii &arr){
    int n=arr.size();

    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }

}
int main(){ 
    vii arr={1,2,4,5,3,6,8,7};
    cout<<"original array:"<<endl;
    for(int i:arr) cout<<i<<" ";
    cout<<"\nReversed  array:"<<endl;
    rev(arr);
    for(int i:arr) cout<<i<<" ";
    
}
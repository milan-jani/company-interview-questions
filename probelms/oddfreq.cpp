#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;


int oddfreq(vi arr){
   int ans=arr[0];
    for (int  i = 1; i < arr.size(); i++)
    {
        ans^=arr[i];
    }
    return ans;
    

}
//what is civic sense: 
int main(){
    vi arr={2,2,5,4,3,4,3};
   // vi arr={9,1,1,1,1,9,2,2,3,5,5};
   cout<< oddfreq(arr);
   
     return 0;
   
   
}
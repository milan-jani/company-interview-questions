#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;


int oddfreq(vi arr){ //TC: O(n) SC: O(1)
   int ans=arr[0]; //1
    for (int  i = 1; i < arr.size(); i++) //n*1= n
    {
        ans^=arr[i]; //1
    }
    return ans;//1
    

}
 
int main(){
    vi arr={2,2,5,4,3,4,3}; //1
   // vi arr={9,1,1,1,1,9,2,2,3,5,5};
   cout<< oddfreq(arr); //1
   
     return 0;
   
   
}
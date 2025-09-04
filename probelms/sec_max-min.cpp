#include<iostream>
#include<vector>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;


pii sec_minimum_maximum(vi arr){ 
  int ma=arr[0],mi=arr[0],smax=INT_MIN,smin=INT_MAX;
  for(int i=1;i<arr.size();i++){
    int x=arr[i];
    if(x> ma){
      smax=ma;
      ma=x;
    }
    else if(x>smax && x<ma) smax=x;
    if(x<mi) {
      smin=mi; mi=x;
    }
    else if( x<smin && x > mi ) smin=x;
  }
  if(smin==INT_MAX || smax==INT_MIN) return {-1,-1};
  return {smin,smax};
}
 
int main(){
    //vi arr={1,2,4,7,7,5}; //1
   //vi arr={9,1,1,1,1,9,2,2,3,5,5};
    vi arr={7,9,21,12,72,4,12,5};
    vi arr1={1};

   pii ans= sec_minimum_maximum(arr);
   cout<<"second minimum:"<<ans.first<<endl<<"Second largest:"<<ans.second<<endl;
   ans= sec_minimum_maximum(arr1);
   cout<<"second minimum:"<<ans.first<<endl<<"Second largest:"<<ans.second<<endl;

     return 0;
   
   
}
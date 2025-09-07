#include <bits/stdc++.h>
using namespace std;

// pair<int, int> mminmax(int arr[], int n) {
//     if (n == 1) return {arr[0], arr[0]};
//     if (n == 2) return {min(arr[0], arr[1]), max(arr[0], arr[1])};

//     int mid = n / 2;
//     pair<int, int> left = mminmax(arr, mid);
//     pair<int, int> right = mminmax(arr + mid, n - mid);

//     int finalMin = min(left.first, right.first);
//     int finalMax = max(left.second, right.second);

//     return {finalMin, finalMax};
// }
pair<int, int> mminmax(int arr[], int start,int end) {
 
    if (start == end) return {arr[start], arr[start]};
    
    int mid= (start + end) / 2;

  
    pair<int, int> left = mminmax(arr, start, mid);
    pair<int, int> right = mminmax(arr, mid + 1, end);
   
    int finalMin = min(left.first, right.first);
    int finalMax = max(left.second, right.second);

    return {finalMin, finalMax};
} //TC:  
int main() {
    int arr[] = {10, 3, 5, 1, 9, 8};
    // int arr[] = {5,6,10,3,1,8,12};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> result = mminmax(arr,0,n-1);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;
   cout<<(10>>3);
   cout<<(10<<3);
    return 0;
}

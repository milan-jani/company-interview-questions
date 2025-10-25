#include<iostream>
using namespace std;

int parti(int a[], int low, int high) {
    int pivot = a[high];
    int pindex  = (low);
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            swap(a[pindex], a[j]);
            pindex++;
            
        }
       
    }
    swap(a[pindex], a[high]);
    return pindex;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pindex = parti(a, low, high);
        quicksort(a, low, pindex - 1);
        quicksort(a, pindex + 1, high);
    }
    
}
void printarray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[6] = {4, 3, 5, 1,2,2};
    int size = sizeof(a) / sizeof(a[0]);

    quicksort(a, 0, size - 1);
   

    cout << "Sorted array: ";
    printarray(a, size);
   
 

  
    return 0;
}
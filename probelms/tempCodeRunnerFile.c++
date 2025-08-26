void selectionsort(int a[],int size){
    int count = 0; 
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
           // count++; 
            if(a[min]>a[j]){
                min=j;
            }
        }
        if (i!=min)  swap(a[i],a[min]);
    }
    //cout << "Total iteration" << count << endl;
}
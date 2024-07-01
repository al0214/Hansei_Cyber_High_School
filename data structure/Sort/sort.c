#include <stdio.h>
void Selection_Sort(int a[], int n){
    int i,j;
    int min, index;
    for(i=0; i<n-1; i++){
        min = a[i];
        index = i;
        for(j=i+1; j<n; j++){
            if(min>a[j]){
                min = a[j];
                index = j;
            }
        }

        a[index] = a[i];
        a[i] = min;

        // step 별로 출력
        printf("step %d : ", i);
        for(int k=0; k<n; k++)
            printf("%d \t", a[k]);
            printf("\n");
    }
}

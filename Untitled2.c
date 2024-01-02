#include <stdio.h>

int main() {
    int n;
    printf("Enter Elements Of array =  ");
    scanf("%d",&n);
    int arr[n]; 
    int *p = arr;
	int i;
    printf("Enter Your elements:\n",n);
    for ( i = 0; i < n; i++) {
        scanf("%d", p+i);
    }
    printf("Elements in the array are: ");
    for ( i = 0; i < n; i++) {
        printf(",%d ",*(p+i));
    }
    printf("\n");
}


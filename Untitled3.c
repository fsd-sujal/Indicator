#include <stdio.h>
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
	int i;
    while (start < end) {
        
        int temp = *start;
        *start = *end;
        *end = temp;
       
        start++;
        end--;
    }
}

int main() {
    int n;
    int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 
    int *ptr = arr; 

    printf("Enter %d elements:\n", n);

    
    for (i= 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Original array: ");
    
    
    for ( i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    
    reverseArray(ptr, n);
    printf("\nReversed array: ");
    
    
    for ( i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    
    printf("\n");

}


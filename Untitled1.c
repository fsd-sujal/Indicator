#include <stdio.h>

void swap(int*n,int*n2) {
    int temp=*n;
    *n=*n2;
    *n2=temp;
}

int main(){
    int n,n2;
	printf("Enter The Value Of Number 1 = ");
    scanf("%d",&n);
    printf("Enter The Value Of Number 2 = ");
    scanf("%d", &n2);
    printf("Swapping Pela Number1 = %d, Number2 = %d\n", n, n2);
    swap(&n, &n2);
    printf("Swapping Pchii Number1 = %d, Number2 = %d\n", n, n2);
}


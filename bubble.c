#include <stdio.h>


int main(void)
{   int a[8];
    printf("Please input 8 numbers:");
    for (int i = 0; i < 8; i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<8;i++) {
        for (int j=i;j<8;j++) {
            if (a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After sorting:");
    for (int i = 0; i < 8; i++) {
        printf("%d ",a[i]);
    }
}

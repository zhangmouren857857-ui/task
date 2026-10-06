#include <stdio.h>


int main(void)
{   int a[9];

    printf("Please input 9 numbers:");
    for (int i = 0; i < 9; i++) {
"        scanf(""%d"",&a[i]);"
    }
    for (int i=0;i<9;i++) {
        for (int j=i;j<9;j++) {
            if (a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("After sorting:");
    for (int i = 0; i < 9; i++) {
"        printf(""%d "",a[i]);"
    }
}

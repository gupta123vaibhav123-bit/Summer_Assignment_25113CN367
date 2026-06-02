#include <stdio.h>
int main()
 {
    int n,count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = n; i!= 0; i=i/10) 
    {
        count++;
    }
    printf("Number of digits in %d is %d\n", n, count);
    return 0;
}   
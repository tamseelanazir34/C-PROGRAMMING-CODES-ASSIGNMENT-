#include <stdio.h>

int main()
{
    int n, rem, rev = 0;
	 // Initialize rev to 0

    printf("Enter the no: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
}
printf("reversed no=%d\n ",rev);
    return 0; 
}

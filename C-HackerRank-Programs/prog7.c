#include <stdio.h>

int main()
{
    int a, b;
    char *words[] = {"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            printf("%s \n", words[i-1]);
        } else if ( i%2 == 0)
        {
            printf("even \n");
        } else
        {
            printf("odd \n");
        }
    }

    return 0;
}

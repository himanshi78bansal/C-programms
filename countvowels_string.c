// Count vowels in a string
#include<stdio.h>
int main()
{
    char str[100];
    printf("\n\nEnter a string : ");
    gets(str);
    int count = 0;
    for(int  i = 0; str[i] != '\0'; i++ )
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        count++;
    }
        printf("\n%d\n\n",count);

    return 0;
}

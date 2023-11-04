// Slice a String
#include<stdio.h>
#include<string.h>

int main()
{
    char slice[100];
    int a,b;

    printf("\n\nEnter string : ");
    scanf("%s",slice);

    printf("\nEnter index a : ");
    scanf("%d",&a);
    printf("\nEnter index b : ");
    scanf("%d",&b);
    printf("\n");

    for(int i = a; i <= b; i++)
    {
    printf("%c",slice[i]);
    }
    printf("\n\n");
    
    return 0;
}



// // Slice a String using function

// #include<stdio.h>
// #include<string.h>
// void str (char slice[], int a, int b);


// int main()
// {
//     char slice[100];
//     int a,b;

//     printf("\n\nEnter string : ");
//     scanf("%s",slice);

//     printf("\nEnter index a : ");
//     scanf("%d",&a);
//     printf("\nEnter index b : ");
//     scanf("%d",&b);
//     printf("\n");
//     str (slice,a,b);
//     return 0;
// }

// void str (char slice[], int a, int b)
// {

//     for(int i = a; i <= b; i++)
//     {
//     printf("%c",slice[i]);
//     }
//     printf("\n\n");
    
// }
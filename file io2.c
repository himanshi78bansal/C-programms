//  Read a chracter using fgetc in file

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt","r");
    
    printf("%c",fgetc(fptr));         // fgetc -> reads a chracter
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));
    fclose(fptr);

    return 0;
}




// //  Write a chracter using fputc in file
// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","w");
    
//     fputc('M',fptr);               // fputc -> writes a chracter
//     fputc('A',fptr);
//     fputc('N',fptr);
//     fputc('G',fptr);
//     fputc('O',fptr);
//     fclose(fptr);

//     return 0;
// }



// //  Read a sentence using EOF in file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","r");
    
//     char ch;
//     ch = fgetc(fptr);

//     for (int i = 0; ch != EOF; i++)    // EOF (End of File)
//     {
//         printf("%c",ch);
//         ch = fgetc(fptr);
//     }

//     printf("\n");
//     fclose(fptr);

//     return 0;
// }
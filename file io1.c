//  Read a file

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("hello.txt","r");          // Read "r"
    
    char ch[50];

    fscanf(fptr,"%s",&ch);
    printf("string = %s",ch);
    fclose(fptr);

    return 0;
}




// //  Write a file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","w");      // Write "w"
    
//     char ch[50] = "Mango";

//     fprintf(fptr,"%s",ch);
//     fclose(fptr);

//     return 0;
// }



// //  Append a file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","a");        // Append "a"
    
//     char ch[50] = "Mango";

//     fprintf(fptr,"%s",ch);
//     fclose(fptr);

//     return 0;
// }
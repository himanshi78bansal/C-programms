// //  Read 5 integer file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("hello.txt","r");          // Read "r"
    
//     int n;

//     fscanf(fptr,"%d",&n);
//     printf("number = %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("number = %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("number = %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("number = %d\n",n);
//     fscanf(fptr,"%d",&n);
//     printf("number = %d\n",n);
//     fclose(fptr);

//     return 0;
// }






// //  Write a program to input student info using file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("student.txt","w");          // Write "w"
    
//     char name[50];
//     int age;
//     float cgpa;

//     printf("\nEnter the name of student : ");
//     scanf("%s",&name);
//     printf("\nEnter the age of student : ");
//     scanf("%d",&age);
//     printf("\nEnter the cgpa of student : ");
//     scanf("%f",&cgpa);

//     fprintf(fptr,"Name of Student : %s\n",name);
//     fprintf(fptr,"Age of Student : %d\n",age);
//     fprintf(fptr,"CGPA of Student : %f\n",cgpa);
    
//     fclose(fptr);

//     return 0;
// }





//  Write a program to write all the odd numbers from 1 to n in a file.

#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("odd.txt","w");          // Write "w"
    
    int n;

    printf("\nEnter the number : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
{
    if (i % 2 != 0)
    {
    fprintf(fptr,"odd = %d\n",i);
    }
}

    
    fclose(fptr);

    return 0;
}




10:30 time
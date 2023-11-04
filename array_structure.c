// Array in Structure
#include<stdio.h>
#include<string.h>
struct student 
{
    char name [100];
    int roll;
    float cgpa;
};

    int main()
{
    struct student bsc[100];
    
    bsc[0].roll = 12;
    bsc[0].cgpa = 98.9;
    strcpy (bsc[0].name , "Himanshi");

    printf("\n\nName of Student = %s\n",bsc[0].name);
    printf("\nRoll of Student = %d\n",bsc[0].roll);
    printf("\nCgpa of Student = %f\n\n",bsc[0].cgpa);


    return 0;
}

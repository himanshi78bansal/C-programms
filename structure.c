// Structure
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
    // struct student s1 = {"Himanshi",78,9.2};     // Single line declaration 

    // Multiple line declaration

    strcpy(s1.name,"Himanshi");
    s1.roll = 78;
    s1.cgpa = 9.2;

    printf("\nname = %s\n",s1.name);
    printf("\nroll no.= %d\n",s1.roll);
    printf("\ncgpa = %f\n\n",s1.cgpa);

    return 0;
}






// // Data of three students using structure
// #include<stdio.h>
// #include<string.h>
// struct student 
// {
//     char name [100];
//     int roll;
//     float cgpa;
// };

//     int main()
// {
//     struct student s1;
//     struct student s2;
//     struct student s3;

//     strcpy (s1.name , "Sita");
//     strcpy (s2.name , "Gita");
//     strcpy (s3.name , "Rita");

//     s1.roll = 11; 
//     s2.roll = 12;
//     s3.roll = 13;

//     s1.cgpa = 98.3;
//     s2.cgpa = 97.5;
//     s3.cgpa = 85.5;

//     printf("\nName of student = %s\n",s1.name);
//     printf("Roll No. of %s = %d\n",s1.name,s1.roll);
//     printf("cgpa of %s = %f\n",s1.name,s1.cgpa);

//     printf("\nName of student = %s\n",s2.name);
//     printf("Roll No. of %s = %d\n",s2.name,s2.roll);
//     printf("cgpa of %s = %f\n",s2.name,s2.cgpa);

//     printf("\nName of student = %s\n",s3.name);
//     printf("Roll No. of %s = %d\n",s3.name,s3.roll);
//     printf("cgpa of %s = %f\n\n",s3.name,s3.cgpa);


//     return 0;
// }

// Function in Structure
#include<stdio.h>
    struct student {
        int roll;
        float cgpa;
        char name[100];
    };

    void printinfo(struct student s1);

int main()
{
    struct student s1 = {78,9.2,"Himanshi Bansal"};

    printinfo(s1);

    return 0;
}

    void printinfo(struct student s1)
    {
    printf("\nName = %s\n\n",s1.name);
    printf("\nRoll No. = %d\n\n",s1.roll);
    printf("\nCGPA = %f\n\n",s1.cgpa);
    }


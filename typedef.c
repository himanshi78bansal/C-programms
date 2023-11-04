// typedef in Structure
#include<stdio.h>

    typedef struct student {       // typedef operator
        int roll;
        float cgpa;
        char name[100];
    }stu;                        // typedef 


int main()
{
    stu s1 = {78,9.2,"Himanshi Bansal"};

    printf("\n%s\n\n",s1.name);
    printf("\n%d\n\n",s1.roll);      
    printf("\n%f\n\n",s1.cgpa);

    return 0;
}



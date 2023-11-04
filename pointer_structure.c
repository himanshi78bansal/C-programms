// Pointer in Structure
#include<stdio.h>
    struct student {
        int roll;
        float cgpa;
        char name[100];
    };


int main()
{
    struct student s1 = {78,9.2,"Himanshi Bansal"};
    struct student* ptr = &s1;

    printf("\n%d\n\n",(*ptr).roll);       // pointer operator
    printf("\n%f\n\n",(*ptr).cgpa);
    printf("\n%s\n\n",(*ptr).name);


    printf("\n%d\n\n",ptr->roll);       // arrow operator
    printf("\n%f\n\n",ptr->cgpa);
    printf("\n%s\n\n",ptr->name);

    return 0;
}





// // Arrow operator and pointer operator in structure
// #include<stdio.h>

// struct complex {
//     int real;
//     int img;
// };

// int main()
// {
//     struct complex r = {5,8};
//     struct complex *ptr = &r;

//     printf("\n\nreal part = %d\n",(*ptr).real);  // pointer operator 
//     printf("img part = %d\n",(*ptr).img);


//     printf("\n\nreal part = %d\n",ptr->real);  // arrow operator 
//     printf("img part = %d\n\n",ptr->img);

//     return 0;
// }

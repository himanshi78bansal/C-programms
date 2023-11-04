// My first profect in C
// Project for registration of a student in a school

#include<stdio.h>

typedef struct registration 
{
    char name[50];                                 // Name
    char fname[50];                                // Father's Name
    char gender[10];                               // Gender
    char mobile[50];                               // Mobile No.
    char fmobile[50];                              // Father's Mobile No.
    char mailid[50];                              // Mail id
    int class;                                    // Class
    float marks;                                  // Marks
    int choice;                                   // House
} reg;

void fees (reg stu);
void choice (reg stu);
void marks (reg stu);
int main()
{
    // Input

    FILE* fptr;
    fptr = fopen("registration","w");

    reg stu;

    printf("\n\nWelcome to Aggarwal International School");
    printf("\n\nRegistration form");

    printf("\n\nEnter your Name : ");
    scanf("%s",&stu.name);

    printf("\nEnter your Father's Name : Mr.");
    scanf("%s",&stu.fname);

    printf("\nEnter your Gender (M-Male or F-Female) : ");
    scanf("%s",&stu.gender);

    printf("\nEnter your Mobile No. : ");
    scanf("%s",&stu.mobile);

    printf("\nEnter your Father's Mobile No. : ");
    scanf("%s",&stu.fmobile);

    printf("\nEnter your E-Mail Id : ");
    scanf("%s",&stu.mailid);

    printf("\nEnter class (1-10) : ");
    scanf("%d",&stu.class);
    if (stu.class<1 && stu.class>10)
    {
        printf("Invalid Enter");
        return 0;
    }

    printf("\nEnter previous class marks percentage : ");
    scanf("%f",&stu.marks);
    if (stu.marks < 70)
    {
        printf("\nSorry...You are not welcome here...\n\n");
        return 0;
    }

    printf("\nChoose 1-4 : ");
    printf("\n\n1. Studies");
    printf("\n2. Sports");
    printf("\n3. Art");
    printf("\n4. Skill");
    printf("\n\nEnter your choice : ");
    scanf("%d",&stu.choice);
    if (stu.choice > 4){
    printf("\nChoose from 1-4");
    return 0;
    }

    printf("\nThank You for the details...\n");



    // Output

    printf("\n\nCheck Your Details in registration file...");
    printf("\n\nThank You\n\n");

    fprintf(fptr,"\n\n\tAggarwal International School\n\n");
    fprintf(fptr,"\n\nRegistred Details\n\n");
    
    fprintf(fptr,"Your name is : %s",stu.name);
    fprintf(fptr,"\n\nYour Father's Name is : Mr.%s",stu.fname);
    {
    if (stu.marks >= 90)
    {
        fprintf(fptr,"\n\nYour class and its section will be : %dth A",stu.class);
    }
    if (stu.marks < 90 && stu.marks >= 80)
    {
        fprintf(fptr,"\n\nYour class and its section will be : %dth B",stu.class);
    }
    if (stu.marks <= 80 && stu.marks >= 70)
    {
        fprintf(fptr,"\n\nYour class and its section will be : %dth C",stu.class);
    }
}

    fprintf(fptr,"\n\nYour Gender is : %s",stu.gender);
    fprintf(fptr,"\n\nYour Mobile No. is : %s",stu.mobile);
    fprintf(fptr,"\n\nYour Father's Mobile No. is : %s",stu.fmobile);
    fprintf(fptr,"\n\nYour Mail Id is : %s",stu.mailid);
    {
    if (stu.choice == 1)
    fprintf(fptr,"\n\nYour School House will be : Truth.");
    else if (stu.choice == 2)
    fprintf(fptr,"\n\nYour School House will be : Power.");
    else if (stu.choice == 3)
    fprintf(fptr,"\n\nYour School House will be : Beauty.");
    else if (stu.choice == 4)
    fprintf(fptr,"\n\nYour School House will be : Perfection.");
}
    fprintf(fptr,"\n\n\n\nFees structure of class %dth is....",stu.class);
    {
    if (stu.class<=5)
    {
        fprintf(fptr,"\n\n\nAdmission fees (per year) : Rs.5,000");
        fprintf(fptr,"\n\nTuition fees (per year) : Rs.24,000");
        fprintf(fptr,"\n\nExtra curriculam fees (per year) : Rs.5,000");
        fprintf(fptr,"\n\nHostel fees (per year) : Rs.50,000");
        fprintf(fptr,"\n\nTotal fees (per year) : Rs.84,000");
    }
    if (stu.class>5 && stu.class <= 8)
    {
        fprintf(fptr,"\n\n\nAdmission fees (per year) : Rs.8,000");
        fprintf(fptr,"\n\nTuition fees (per year) : Rs.30,000");
        fprintf(fptr,"\n\nExtra curriculam fees (per year) : Rs.5,000");
        fprintf(fptr,"\n\nHostel fees (per year) : Rs.50,000");
        fprintf(fptr,"\n\nTotal fees (per year) : Rs.93,000");
    }
    if (stu.class>8 && stu.class <=10)
    {
        fprintf(fptr,"\n\n\nAdmission fees (per year) : Rs.10,000");
        fprintf(fptr,"\n\nuition fees (per year) : Rs.60,000");
        fprintf(fptr,"\n\nExtra curriculam fees (per year) : Rs.5,000");
        fprintf(fptr,"\n\nHostel fees (per year) : Rs.50,000");
        fprintf(fptr,"\n\nTotal fees (per year) : Rs.1,25,000");
    }
}
    fprintf(fptr,"\n\n\n\nThank You for the registration......\n\n");

    return 0;

}




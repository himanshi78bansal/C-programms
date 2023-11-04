// Marks table using elseif 
#include<stdio.h>
int main()
{
    int marks; 
    printf("\n\nEnter marks :");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("\nGrade = A\n\n");
    } else if(marks>=60 && marks<=79){
        printf("\nGrade = B\n\n");
    } else if(marks>=50 && marks<=59){
        printf("\nGrade = C\n\n");
    } else if(marks>=40 && marks<=49){
        printf("\nGrade = D\n\n");
    } else if(marks>=0 && marks<=39){
        printf("\nGrade = E\n\n");
    } else{
        printf("\nInvalid Marks\n\n");
    }
    return 0;
}

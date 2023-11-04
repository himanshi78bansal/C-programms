// Enter address of 4 person...using structure,typedef,array,function

#include<stdio.h>
#include<string.h>

typedef struct address {
    int houseno;
    char city[50];
    char state[50];
    int pincode;
} add;

void printadd(add a);

int main()
{
    add a[4];

    printf("\n\nEnter 1st houseno. : ");
    scanf("%d",&a[0].houseno);
    printf("\nEnter 1st city : ");
    scanf("%s",&a[0].city);
    printf("\nEnter 1st state : ");
    scanf("%s",&a[0].state);
    printf("\nEnter 1st pincode : ");
    scanf("%d",&a[0].pincode);
    printf("\n\n");

    printf("\n\nEnter 2nd houseno. : ");
    scanf("%d",&a[1].houseno);
    printf("\nEnter 2nd city : ");
    scanf("%s",&a[1].city);
    printf("\nEnter 2nd state : ");
    scanf("%s",&a[1].state);
    printf("\nEnter 2nd pincode : ");
    scanf("%d",&a[1].pincode);
    printf("\n\n");

    printf("\n\nEnter 3rd houseno. : ");
    scanf("%d",&a[2].houseno);
    printf("\nEnter 3rd city : ");
    scanf("%s",&a[2].city);
    printf("\nEnter 3rd state : ");
    scanf("%s",&a[2].state);
    printf("\nEnter 3rd pincode : ");
    scanf("%d",&a[2].pincode);
    printf("\n\n");

    printf("\n\nEnter 4th houseno. : ");
    scanf("%d",&a[3].houseno);
    printf("\nEnter 4th city : ");
    scanf("%s",&a[3].city);
    printf("\nEnter 4th state : ");
    scanf("%s",&a[3].state);
    printf("\nEnter 4th pincode : ");
    scanf("%d",&a[3].pincode);
    printf("\n\n");

    printadd(a[0]);
    printadd(a[1]);
    printadd(a[2]);
    printadd(a[3]);

    return 0;
}

void printadd(add a)
{
    printf("\nAddresses is : %d,%s,%s,%d\n",a.houseno,a.city,a.state,a.pincode);
}


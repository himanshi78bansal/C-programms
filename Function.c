// Function
#include<stdio.h>
void namaste();
void bonjour();
void namaste(){
    printf("Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");
}
int main()
{
    printf("Enter 1 for indian and 2 for french : ");
    int i;
    scanf("%d",&i);
    if(i==1){
        namaste();
    } else {
        bonjour();
    }
    return 0;
}


// Check wheather number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("\n\nEnter number :");
    scanf("%d",&n);

    for(int i=2; i<n-1; i++){
        if(n%i==0){
            printf("\nNumber is not prime\n\n");
            break;
        } else {
            printf("\nNumber is prime\n\n");
            break;
        }
    }
    
    return 0;
}

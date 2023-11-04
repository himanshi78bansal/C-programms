//Larger of three numbers
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
            if(a>c){
                    printf("Larger is : %d\n\n",a);
                    } else {
                    printf("Larger is : %d\n\n",c);
                    }
            }else{
                if(b>c){
                        printf("Larger is : %d\n\n",b);
                    }else{
                        printf("Larger is : %d\n\n",c);
                    }
            }
    
    return 0;
}


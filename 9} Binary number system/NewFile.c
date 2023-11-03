
#include <stdio.h>

int main (void)
{
    int bin[8]={0};
    int sum[8];
    int orig,num,i=0,j;
    int addn[8] = {0,0,0,0,0,0,0,1};
    int carry = 0;
    printf("Please enter the number\n");
    scanf("%d",&num);
    if ( num < 0 )
    {
        orig = num;
        num = -num;
    }
    while (num!= 0)
    {
        bin[8-i-1] = num%2;
        num = num/2;
        i++;
    }
    for ( j = 0; j < 8; j++ )
    {
        printf("%d",bin[j]);
    }
    printf("\n");
    if ( orig < 0 )
    {
        for ( i = 0; i < 8; i++ )
        {
            if (bin[i] == 0)
                bin[i] = 1;
            else
                bin[i] = 0;
        }
        for ( i = 0; i < 8; i++ )
        {
            sum[i] = ((bin[i]^addn[i])^carry); 
            carry = ((bin[i] & addn[i])| (bin[i] & carry) | (addn[i] & carry) );
        }

        printf("The 2's complement of the number is \n");
        printf("%d",carry);
        for ( i = 0; i < 8; i++ )
        {
           printf("%d",sum[i]);
        }
       printf("\n");
    }

    return 0;
}
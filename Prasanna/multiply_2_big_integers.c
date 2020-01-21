#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void multiply(char mul[],int l1,int l2,char num1[],char num2[])
{
    int i,j,k = 0;
    for(i = 0;i < l1;i++)
    {
        for(j = 0;j < l2;j++)
        {
            mul[i + j] += num1[i] * num2[j];
        }
    }


    int temp = 0;
    for(i = 0;i < l1 + l2;i++)
    {
        temp = (mul[i])/10;
        mul[i] = (mul[i])%10;
        mul[i+1] += temp; 
    }

    for(i = l1 + l2;i >= 0;i--)
    {
        if(mul[i] > 0)
        {
            break;
        }
    }

    for(;i >= 0;i--)
    {
        printf("%d",mul[i]);
    }
}






int main()
{
    int n = 1000000;
    char num1[n],num2[n],temp1[n],temp2[n];
    char mul[2*n];
    scanf("%s",temp1);
    scanf("%s",temp2);

    int l1 = strlen(temp1);
    int l2 = strlen(temp2);

    int x = 0,y = 0;
    int i,j;
    for(i = l1 - 1;i >= 0;i--)
    {
        num1[x++] = temp1[i] - '0';
    }
    for(j = l2 - 1;j >= 0;j--)
    {
        num2[y++] = temp2[j] - '0';
    }
    
    multiply(mul,l1,l2,num1,num2);
    return 0;
}

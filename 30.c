#include<stdio.h>
int main ()
{
    int a,i;
    int arr[100];
    printf("Enter number that's  you want to check which is larger \n");
    scanf("%d",&a);
    for ( i = 0; i < a; i++)
    {
        printf("Enter number is %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for ( i = 1; i < a; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
        printf("Largest number is %d",max);
    return 0;
}

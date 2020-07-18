#include<stdio.h>
#include<conio.h>


void bubble_sort(int *a,int sizeof_a){

    int i,flag=0,j,temp;

    for(i=0;i<sizeof_a;i++)
    {
        flag=0;
        for(j=1;j<sizeof_a-i;j++)
        {
            if(a[j-1]>a[j])
            {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                    flag=1;
            }
        }
        if(flag==0)
            break;
    }

}



int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int i,a[n];
    printf("Enter array :\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubble_sort(a,n);

    printf("*** Sorted array is *** \n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }

}

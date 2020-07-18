#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<sys/time.h>



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
    int i,j,k,b;
    float t1,t2;
    struct timeval tv;
    struct timezone tz;

    i=5000;
    int a[i];
    for(i=0;i<5000;i++)
    {
        b=rand()%i;
        a[i]=b;
    }
    gettimeofday(&tv,&tz);
    t1=tv.tv_usec;
    printf("\n%d",tv.tv_usec);
    bubble_sort(a,i);
    gettimeofday(&tv,&tz);
    t2=tv.tv_usec;
    printf("\n%d",tv.tv_usec);
    printf("\n %lf",t2-t1);

}

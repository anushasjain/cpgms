#include <stdio.h>
int inputarray(int a[],int n);
void outputarray(int );
int inputarray(int a[],int n)
    {

        int i;

        printf("enter the number of elements in an array \n");

        scanf("%d",&n);

        printf("the array elements are \n");

        for(i=0;i<n;i++)
           {
              scanf("%d",&a[i]);
           }
}

int sumarray(int a[],int n)

           { int i, sum;

        for(i=0;i<n;i++)
           {
               sum=sum+a[i];

           }
               return sum;

           }
void outputarray(int sum)
           {
          printf("sum of array is %d:",sum);
           }
int main()
           { int s,a[100],n;
               inputarray(a,n);

               s=sumarray(a,n);

               outputarray(s);
           }

#include <stdio.h>

int compute(int *s);

void res(int ans);

   int input()

   {
      int n;
      printf("enter a number \n");
      scanf("%d",&n);
      return n;
   }

   int main()

   {
      int s=input();
      int ans=compute(&s);
      res(ans);
   }

   int compute(int *s)

   {
      int ans=*s+1;
      return ans;
   }

   void res(int ans)

   {
      printf("answer is %d ",ans);
   }





//Name-Switin Mechineni
//Roll no.-240002074
#include<stdio.h>
int power(int,int);
int power(int a, int b){
   if (b==0)
   {
      return 1;
   }
   
   return power(a,b-1)*a;
}

int main()
{
    printf("Press 1 for adddition\n");
    printf("press 2 for subraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for division\n");
    printf("Type 5 for logarithmic(only to the base e )\n");
    printf("Type 6 for Trignometric(small Angles in radians)\n");
    printf("Type 7 for exponential\n");
    printf("Type 8  for solving Quadratic\n");
    int operation;
    double n1,n2,n3,a,b,c,x1,x2,x;              
    int function;          
     printf("Enter operation :");
    scanf("%d", &operation);
    
      if (operation<9)
   {
      
        if (operation==1)
    {   
        printf("Task:n1+n2\n");
        printf("Enter n1:");
        scanf("%lf", &n1);
        printf("Enter n2:");
        scanf("%lf", &n2);
        printf("Your Answer is %lf\n",(n1)+(n2));
        printf("Enter operation :");
        scanf("%d", &operation);
      }
     if (operation==2)
     {
        printf("Task:n1-n2\n");
        printf("Enter n1:");
        scanf("%lf", &n1);
        printf("Enter n2:");
        scanf("%lf", &n2);
        printf("Your Answer is %lf\n",(n1)-(n2));
        printf("Enter operation :");
        scanf("%d", &operation);
     }
     if (operation==3)
     {
        printf("Task:n1 X n2\n");
        printf("Enter n1:");
        scanf("%lf", &n1);
        printf("Enter n2:");
        scanf("%lf", &n2);
        printf("Your Answer is %lf\n",(n1)*(n2));
        printf("Enter operation :");
        scanf("%d", &operation);
     }
     if (operation==4)
     {
        printf("Task:n1/n2\n");
        printf("Enter n1:");
        scanf("%lf", &n1);
        printf("Enter n2:");
        scanf("%lf", &n2);
        printf("Your Answer is %lf\n",(n1)/(n2));
        printf("Enter operation :");
        scanf("%d", &operation);
        
     }
     if (operation==5)
     {
      printf("Could not be to complete it\n");
      printf("Enter operation :");
      scanf("%d", &operation);
     }
     
     if (operation==6)
     {
       printf("Press 1 for sin\n");
       printf("press 2 for cos\n");
       printf("Press 3 for tan\n");
       printf("Enter function:");
       scanf("%d", &function);
       if (function==1)
       {
         printf("Task:sin(x)\n");
         printf("Enter x:");
         scanf("%lf", &x);
         n3= (x)-((x)*(x)*(x)/6);
         printf("Your answer is: %lf\n", n3);
         printf("Enter operation :");
        scanf("%d", &operation);
       }
       if (function==2)
       {
          printf("Task:cos(x)\n");
         printf("Enter x:");
         scanf("%lf", &x);
         n3= 1-((x)*(x)/2);
         printf("Your answer is: %lf\n", n3);
         printf("Enter operation :");
        scanf("%d", &operation);
       }
       if (function==3)
       {
         printf("Task:tan(x)\n");
         printf("Enter x:");
         scanf("%lf", &x);
         n3= (x)+((x)*(x)*(x)/3);
         printf("Your answer is: %lf\n", n3);
         printf("Enter operation:");
        scanf("%d", &operation);
       }
       else
       {
         printf("Invalid Input");
         printf("Enter operation:");
        scanf("%d", &operation);

       }
       

   }
   if (operation==7)
     {
       printf("Task: n1 raise to the power n2(please enter integers)\n");
       printf("Enter n1:");
        scanf("%lf", &n1);
        printf("Enter n2:");
        scanf("%lf", &n2);
        double n3= power(n1,n2);
        printf("Your Answer is %lf\n",n3);
        printf("Enter operation :");
        scanf("%d", &operation);
} 
   if (operation==8)
   {
      printf("Could not  be able to complete it\n");
      printf("Enter operation :");
      scanf("%d", &operation);
   }
      
    
   }
}




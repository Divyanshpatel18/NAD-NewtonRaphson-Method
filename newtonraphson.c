#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
/* Defining equation to be solved. Change this equation to solve another problem. */
float f (float x)
{  
return (x*x-x-1);
}
/* Defining derivative of g(x). As you change f(x), change this function also. */
float g(float x)
{
 return(2*x-1);
}
void main()
{
    float b, m, e;
    int i = 1, N;
    clrscr(); /* Inputs */      printf("\nEnter initial guess:\n");
    scanf("%f", &b);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
    printf("Enter maximum iteration:\n");
    scanf("%d", &N);      /* Implementing Newton Raphson Method */
    printf("\ni\t\tb\t\tf(b)\t\tm\t\tf(m)\n");
    do      {
       
        if(g(b) == 0.0)          {
            printf("Mathematical Error.");
            exit(0);
        }
        m = b - f(b)/g(b);
        printf("%d\t\t%f\t%f\t%f\t%f\n",i,b,f(b),m,f(m));
        b = m;
        i = i+1;
        if(i> N)         
         {
            printf("Not Convergent.");
            exit(0);
        }
       
    }
    while(fabs(f(m))>e);
    printf("\nRoot is: %f", m);
    getch();
}

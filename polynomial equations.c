#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
float x1,x2;

printf("Enter your coefficients:\n");
scanf("%d %d %d",&a, &b, &c);
puts("Roots of the equation");

//1. term a
switch(a){
    case 1: printf("%dx^2,a");
    case 0: break;
    case -1: printf("-x^2"); break;
    default: printf("%dx^2",a);
}
//2. + sign between a and b
    if(b>0&&a!=0) printf("+");
//3. term b
switch(b){
    case 1: printf("x");
    case 0: break;
    case -1: printf("-x"); break;
    deafault: printf("%dx",b);
}
//4. + sign between b and c
if((a!=0 || b!=0)&&c>0) printf("+");

//5. term c
if(c!=0) printf("%d=0\n",c);

//Calculate solutions
float sq=b*b-4*a*c;
if(a==0){
    if(b!=0)
        printf("The answer is %.2f\n", -(float)c/b);
    else printf("No solution\n");
}
else {
    if(sq==0)
        else if(sq<0)
    else{

    }
}

return 0;
}

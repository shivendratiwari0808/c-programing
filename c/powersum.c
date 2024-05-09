#include<stdio.h>
#include<math.h>
int main(){
int b,p;
long r=1,s=0;
printf ("enter base power values");
scanf("%d%d",&b,&p);
while (p>=1)
{
   r=r*b; s=s+r;
   p--;
}
printf("%ld",&s);
return 0;

}
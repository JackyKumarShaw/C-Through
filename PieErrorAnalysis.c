#include<stdio.h>
#include<math.h>
int main()
{
double Ea,Er,Ep,Vt,Va,sum=0.0,temp=0.0;
int k,i;
printf("Enter the limit: ");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
sum=sum+(1.0/pow(i,2));
}
Va=sqrt(8*sum);
Vt=4*atan(1); 
Ea=fabs(Vt-Va);
Er=Ea/Vt;
Ep=100*Er;
printf("\nThe exact value PI is: %lf",Vt);
printf("\nThe approximate value of PI is: %lf",Va);
printf("\nThe absolute error is: %lf",Ea);
printf("\nThe relative error is: %lf",Er);
printf("\nThe relative percentage error is: %lf ",Ep);
return 0;
}
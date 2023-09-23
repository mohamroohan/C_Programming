#include <stdio.h>
void main (void){
int a[]={1,2,3,4,5};
int b=5;
printf("%d %d %d",a[0],a[1],a[2]);
printf ("\n%d",a[0]+a[1]);

float d=5.5;
float c[]={1.1,2.2,3.3};
c[1] = d;
printf ("\n%f %f %f",c[0],c[1],c[2]);

for (int i=0; i<=4;i=i+1 ){
printf("\n%d",a[i]);

}
int ar[10];
ar[0]=2;
ar[1]=4;
ar[2]=6;

printf ("\n while start \n");
int j=1;
while (j<=10){
ar[j]=j;
printf("\n%d",ar[j]);
j=j+1;





}



}

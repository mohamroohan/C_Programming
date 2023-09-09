#include <stdio.h>

void main (void){
//////////////////////////////////////////////////////char
char b,g;
printf ("-----------------------------\n");
printf ("enter chars (a,b) = ");
scanf("%c,%c",&b,&g);
printf ("%c and %c\n",b,g);
printf ("-----------------------------\n");
/////////////////////////////////////////////////////////int
printf ("-----------------------------\n");
int i,j;
printf ("enter integers (1,2) = ");
scanf("%d,%d",&i,&j);
printf("%d and %d\n",i,j);
printf ("-----------------------------\n");
////////////////////////////////////////////////////////////float
printf ("-----------------------------\n");
float a,e;
printf ("enter floats (1.2,2.1) = ");
scanf("%f,%f",&a,&e);
printf ("%f and %f \n",a,e);
printf ("-----------------------------\n");
///////////////////////////////////////////////////////////////string
printf ("-----------------------------\n");
char s[10],t[10];
printf ("enter string (moham moiz) = ");
scanf("%s %s",s,t);
printf ("%s and %s \n",s,t);
printf ("-----------------------------\n");
}

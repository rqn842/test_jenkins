#include <stdio.h>
double spin22()
{
   double f1, f2;
   
   for (f1=0;f1<10240;f1++) {
       
      f2 += f1*f1;
   }
   return f2;
}
double spin2()
{
   double f1, f2, f3;
   
   
   for (f1=0;f1<17;f1++) {
      f2 += spin22();
   }
   return f2;
}
double spin1()
{
   double f1, f2;
   
   for (f1=0;f1<19;f1++) {
      f2 += spin2();
   }
   
  return f2;
}
double spin()
{
   double f1, f2;
   
   for (f1=0;f1<23;f1++) {
      f2 += spin1();
   }
   for (f1=0;f1<23;f1++) {
      f2 += spin2();
   }
   return f2;
}
int main()
{
  double r=spin();
  printf ("fount %f\n",r);
  return 0;
}

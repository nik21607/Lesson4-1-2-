#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void EquationFunction(long a, long b, long c){
    float x1, x2;
    long D;
    D = pow(b,2)-4*a*c;
    printf("a = %ld\t b = %ld \t c = %ld\n",a,b,c);
    printf("%ld*x^2+%ld*x+%ld=0\n",a,b,c);
    if(D==0){
      x1 = (float)-b/(2*a);
      printf("\nУравнение имеет 1 корень: x1 = %f\n ", x1);
    }else if(D<0){
     printf("\nУравнение не имеет корней, D<0\n ");
    
    }else if(D>0){
      x1 = (float)(-b + sqrt(D))/(2*a);
      x2 = (float)(-b - sqrt(D))/(2*a);
      printf("\nУравнение имеет 2 корня: x1 = %f и x2 = %f\n", x1, x2);
    }
  
}

int main(int argc, char **argv){
   setlocale(LC_ALL, "Rus");
   if(argc==1){
    printf("Коэффициенты не заданы, повторите ввод\n");
   }else if(argc==2){
      printf("Коэффициенты b и c не заданы, повторите ввод\n");
   }else if(argc==3){
      printf("Коэффициент c не задан, повторите ввод\n");
   }
   long a,b,c;
   a = atol(argv[1]);
   b = atol(argv[2]);
   c = atol(argv[3]);
   EquationFunction(a,b,c);
}

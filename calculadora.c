#include <stdio.h>
void suma();
float resta(float,float);
void multiplicacion();
float divsion(float,float);

int main() {
  suma();
  return 0;
}

void suma(){
int a,b;
printf("dame un numero:");scanf("%d",&a);
printf("dame un otro numero:");scanf("%d",&b);
printf("la suma es:%d",a+b);
}

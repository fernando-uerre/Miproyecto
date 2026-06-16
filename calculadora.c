#include <stdio.h>
void suma();
float resta(float,float);
void multiplicacion();
float divsion(float,float);

int main() {
  float n1,n2;
  suma();
  printf("\n");
  printf("dame un numero:");scanf("%f",&n1);
  printf("dame otro numero:");scanf("%f",&n2);
  printf("la resta es:%f",resta(n1,n2));
  return 0;
}

void suma(){
int a,b;
printf("dame un numero:");scanf("%d",&a);
printf("dame un otro numero:");scanf("%d",&b);
printf("la suma es:%d",a+b);
}
float resta (float a, float b){
float r;
r=a-b;
return r;
}

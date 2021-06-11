#include <stdio.h>
long power (long base, long exponent){
  if(exponent==0){
  return 1;
  }
  else if (exponent==1){
    return base;
  }
  else {
    return base * power(base, exponent - 1);
  }
}

int main (){
  long a;
  long b;
  scanf("%llu%llu",&a,&b);
    printf("%llu",power(a,b));
}


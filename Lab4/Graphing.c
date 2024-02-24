#include <stdio.h>
#include <math.h>

int main(void) {
  
  int o;
  printf("Enter the order of the function: ");
  scanf("%d", &o);
  while(o != -1){
  if(o >= 0 && o <= 3){
  int c[4] = {0};
  for(int a=0;a<=o;a++){
    printf("Enter coefficient of x^");
    printf("%d",a);
    printf(": ");
    int b;
    scanf("%d", &b);
    c[a] = b;
  }

  int d[21] = {100};
  for(int a=-10;a<=10;a++){
    d[a+10] = c[0]*pow(a,0) + c[1]*pow(a,1) + c[2]*pow(a,2) + c[3]*pow(a,3);
  }

  char zq[21][21] = {};
  for(int a=0;a<=20;a++){
    for(int e=0;e<=20;e++){
      zq[a][e] = '   ';
    }
  }
  for(int a=0;a<=20;a++){
    for(int e=0;e<=20;e++){
      if(a==10){ zq[a][e] = '-'; }
      if(e==10){ zq[a][e] = '|'; }
      }
    if(d[a] >= -10 && d[a] <= 10){
      zq[10-d[a]][a] = '*';
    }
  }
  for(int a=0;a<=20;a++){
    for(int e=0;e<=20;e++){
      printf(" %c ", zq[a][e]);
    }
    printf("\n");
  }
}
else{
  printf("The order must be between [0, 3].\n");
}
  int nw;
  printf("Enter the order of the function: ");
  scanf("%d", &nw);
  o = nw;
}
  return 0;
}

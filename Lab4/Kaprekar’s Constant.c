#include <stdio.h>

int getDescendingOrderedDigits(int);

int main(void){
while(1){
int a;
int count = 0;
printf("Enter a number (-1 to stop): ");
scanf("%d", &a);

if (a == -1){
break;
}
if(a > 9999){
printf("Error: The number is too large.\n");
continue;
}
if (a < 1000)
{
printf("Error: The number is too small.\n");
continue;
}

int i= getAscendingOrderedDigits(a);
int j= getDescendingOrderedDigits(a);
int b=a;
int z=0;

while(1)
{
if (b == 6174)
{
printf("Number %d: 6174\n", z+1);
printf("Kaprekar's Constant was reached in %d iteration(s)\n", z);
break;
}
if((b % 10==0) && (b != 1000))
{
printf("Number %d: %d\n", z+1, b/10);
}
else
{
printf("Number %d: %d\n", z+1, b);
}
b = j-i;
if(b<1000)
{
b=b*10;
}
i = getAscendingOrderedDigits(b);
j = getDescendingOrderedDigits(b);
z++;
}
}
}

int getDescendingOrderedDigits(int num){
int d[10]={0};
while(num>0){
d[num % 10]++;
num /= 10;
}
int z=9;
while(z >= 0){
if (d[z] > 0){
num *= 10;
num += z;
d[z]--;
}
else
{
z--;
}
}
return num;
}

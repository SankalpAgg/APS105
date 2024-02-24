#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

int NumberOfDigits(int a);
int ConvToBase10(int b, int feedinp);
int ConvToUserBase(int d, int feedout);

int main(void) {
while (1) {
int e = 0, b = 0, c = 0, f = 0;
char od = '+';
printf("Give input ($ to stop): ");
scanf(" %c %d %d %d %d", &od, &e, &b, &c, &f);

if (od == '$'){
break;
}
else if((od != '+') && (od != '-') && (od != '*') && (od != '/'))
{
printf("Invalid Operator\n");
continue;
}

if (e < 2 || e > 10){
printf("Invalid base\n");
continue;
}
bool check = false;
int g = b;
int h = c;
int num;
while(g>0){
num = g%10;
if (num >= e){
check = true;
break;
}
g /= 10;
}
while(h>0){
num = h%10;
if (num >= e){
check = true;
break;
}
h /= 10;
}

if (check == true){
printf("Invalid digits in operand\n");
continue;
}

int i = 0, j = 0, k = 0, l =0;
i = ConvToBase10(b, e);
j = ConvToBase10(c, e);


if (od == '+'){
k = i + j;
} else if (od == '-'){
k = i - j;
} else if (od == '/'){
k = i/j;
} else if (od == '*'){
k = i*j;
} else {
printf("Invalid operator\n");
continue;
}
l = ConvToUserBase(k, f);
printf("%d %c %d (base %d) = %d %c %d = %d (base %d)\n", b, od, c, e, i, od, j, l, f);
}
return 0;
}

int NumberOfDigits(int a){
int m = 0;
while (a != 0){
a = a/10;
m += 1;
}
return m;
}

int ConvToBase10(int b, int feedinp){
// int digits = NumberOfDigits(b);
// int con10 = 0, g = 0, val1 = 0, val2 = 0;

// f
int num = b;
int dec_value = 0;
int base  = 1;
int temp = num;
int last_digit;
while(temp>0)
{
last_digit = temp % 10;
temp /= 10;
dec_value += last_digit * base;
base *= feedinp;
}
return dec_value;

}

int ConvToUserBase(int d, int feedout){
// int digit=0, space = 0, n = 0, h=0;

// while(d != 0){
// digit = d % feedout;
// space = digit * ((int)pow(10, h));
// n = space + n;
// h++;
// d = d/feedout;
// }
// return n;
int num = d;
int q = 0;
int r = 0;
int sum = 0;

while ( num !=0)
{

r = num % feedout;
sum = (sum * 10) + r;
q = num / feedout;

}
return sum;
}

// The following helps convert any foreign currency to CAD
#include <stdio.h>

int main(void){
double conversionrate;

printf("Enter the conversion rate: ");
scanf("%lf", &conversionrate);

double reqamt;
printf("Enter the amount to be converted (in foreign currency): ");
scanf("%lf", &reqamt);

double outputAmtcad;
outputAmtcad= conversionrate*reqamt;
printf("The amount in Canadian Dollars is: %.2lf", outputAmtcad);

return 0;
}


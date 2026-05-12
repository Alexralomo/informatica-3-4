#include <stdio.h>
void add(void);
void subtract(void);
void multiply(void);
void dibiude(void);
int main(void){

printf("Peligro\n");
printf("No dibidas en sero o si no literal explota\n");
printf("Abre calculadora\n");
printf(" 1. Add\n 2. subtract\n 3. multiply\n 4. dibiude\n");
int user_response;

 if (user_response ==1){
    add();
 }
 else if (user_response ==2){
    subtract();
 }
 else if (user_response ==3){
    multiply();
 }
else if (user_response ==4){
    dibiude();
}

void add(void);{
float one;
float two;
printf("Pon tus numeros amigito\n");
scanf("%f", &one, two);
float answer = (one + two);
printf("%2f \n", answer);
}

void subtract(void);{
float one;
float two;
printf("Pon tus numeros amigito\n");
scanf("%f", &one, two);
float answer = (one - two);
printf("%2f \n", answer);
}

void multiply(void);{
float one;
float two;
printf("Pon tus numeros amigito\n");
scanf("%f", &one, two);
float answer = (one * two);
printf("%2f \n", answer);
}

void dibiude(void);{
float one;
float two;
printf("Pon tus numeros amigito\n");
scanf("%f", &one, two);
float answer = (one / two);
printf("%2f \n", answer);
}











}

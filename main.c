#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include <math.h>

int main() {

    int a, b, c;
    float positiveExpression, negativeExpression, discriminant;

    do {
		printf("Insira o valor de 'a': ");
	} while(!readInteger(&a)); 

    do {
		printf("Insira o valor de 'b': ");
	} while(!readInteger(&b)); 

        do {
		printf("Insira o valor de 'c': ");
	} while(!readInteger(&c)); 

    positiveExpression = (-b + sqrt(pow(b, 2) - 4*a*c))/ (2*a);
    negativeExpression = (-b - sqrt(pow(b, 2) - 4*a*c))/ (2*a);
    discriminant = pow(b, 2) - 4*a*c;

    if(discriminant < 0){
        printf("A equação não tem solução!");
    } else
        printf("x = {%.3f,%.3f}\n", positiveExpression, negativeExpression);

    return EXIT_SUCCESS;
}
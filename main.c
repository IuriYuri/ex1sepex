#include <stdlib.h>
#include <stdio.h>
float somar(float x, float y){
    return x+y;
}
float subtracao(float x, float y){
    return x-y;
}
float produto(float x, float y){
    return x*y;
}
float divisao(float x, float y){
    return x/y;
}
main(){
    float x, y, z;
    float z2;
    char sinal;
    printf("digite o valor de X: ");
    scanf("%f", &x);
    printf("digite o valor de Y: ");
    scanf("%f", &y);
    getchar();
    printf("digite o sinal da operação que deseja que seja realizada pelos numeros digitados.\n+ para soma\n- para subtracao\n* para multiplicacao\n / para divisao.\n");
    sinal = getchar();
    switch (sinal)
    {
    case '+':
        z = somar(x,y);
        break;
    case '-':
        z = subtracao(x,y);
        break;
    case '*':
        z = produto(x,y);
        break;
    case '/':
        z = divisao(x,y);
        break;
    default:
        printf("valor invalido.");
        break;
    }
    printf("%.1f ",z);
    switch (sinal)
    {
    case '+':
        z2 = somar(y,x);
        break;
    case '-':
        z2 = subtracao(y,x);
        break;
    case '*':
        z2 = produto(y,x);
        break;
    case '/':
        z2 = divisao(y,x);
        break;
    default:
        printf("valor digitado para sinal, é invalido.");
        break;
    }
    printf("Caso inverta a ordem da operação, a resposta será: %.1f", z2);
}

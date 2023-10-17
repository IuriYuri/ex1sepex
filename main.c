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
}

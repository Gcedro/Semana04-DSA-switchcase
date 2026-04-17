#include <stdio.h>


int main(){
    /*Criar uma interface com o usuario, onde terá duas opções:
    
    1 - media do aluno --> media = (nota 1 + nota 2)/ 2
    2 - verificação da presença ---> presença --> >= 75 -> presença adequada
                                              --> < 75% -> atentar com a presença
    */
    // Declaração das variáveis 
    int opcao = 1;
    float nota_1, nota_2, media;

    switch(opcao){
    case 1: /*Lógica, função*/ 
    printf("--- CALCULADORA DE MEDIA ---\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);
    media = (nota_1 + nota_2)/2;
    printf("A media do aluno e: %.2f. O calculo para o valor da media e (%.2f)/2", media, nota_1, nota_2);
    break;
    case 2: break;
    default:
}
return 0;

}
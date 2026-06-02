#include <stdio.h>

int main(){
    
    int senha;

    printf("digite a senha: ");
    scanf("%d", &senha);

    while(senha != 1234){
        
        printf("senha incorreta.\n");

        printf("Digite a senha novamente: ");
        scanf("%d", &senha);
    }
    printf("senha correta, acesso permitido!");

    return 0;

}
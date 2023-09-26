#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char texto[100];
    int c = 0, C = 0;

    /*printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);
    fflush(stdin);*/

    setlocale(LC_ALL,"Portuguese");
    
    scanf("%[^\n]s", texto);

    for(int i=0; i<strlen(texto); i++){
        if(texto[i]>='a' && texto[i]<='z'){
            c++;
        }
        else if(texto[i]>='A' && texto[i]<='Z') {
            C++;
        }
    }

    printf("m: %i\n", c);
    printf("M: %i\n", C);

    return 0;
}
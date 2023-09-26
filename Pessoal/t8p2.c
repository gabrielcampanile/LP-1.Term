//Faça um programa que receba uma string de até 1000 caracteres e retorne a quantidade de cada letra existente na string, a, b, c, d, ... A, B, C, D.... e a quantidade de simbolos não-letras (números, espaços, etc.)



#include <stdio.h>
#include <string.h>

#define t 100
int main(){
    char texto[t];
    int m[53] = {0};
    int i;

    scanf("%[^\n]", texto);

    for(i=0; i<strlen(texto); i++){
        if(texto[i]>=97 && texto[i]<=122){
            m[texto[i]-97]++; 
        }
        else if(texto[i]>=65 && texto[i]<=90){
            m[texto[i]-65+26]++;
        }
        else{
            m[52]++;
        }
    }

    for(i=0; i<26; i++){
        printf("%c - %i\n", i+97, m[i]);
    }

    for(i=26; i<52; i++){
        printf("%c - %i\n", i+65-26, m[i]);
    }
    printf("? - %i\n", m[52]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

enum tokens {FDT, CAD, SEP};

struct token{
    char tipo;
    char buffer[128];
} TOKEN, get_token();
//Declaraciones de variables
char caracter;
int contador;

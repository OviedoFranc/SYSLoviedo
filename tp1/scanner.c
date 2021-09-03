#include "scanner.h"

struct token get_token(){
  caracter == '\0';
  caracter=getchar();
  contador = 0;

while(isspace(caracter)) //consumo todos los espacios por si existen antes de empezar
        {
            caracter=getchar();
        }

if(caracter == ',') // por si es un separador el token.
    {
      TOKEN.buffer[0]=',';
      TOKEN.buffer[1]='\0';
      TOKEN.tipo = SEP;
      return TOKEN;
    }

if(caracter != ',' && caracter != EOF) // por si es caracter (sera una cadena)
    {
            do
                {
                    TOKEN.buffer[contador]=caracter;
                    caracter=getchar();
                    contador+=1;
                }
            while(caracter != ',' && caracter != EOF && !isspace(caracter));  // <- Mientras que no existan, voy poniendo los caracteres en el buffer

                if(caracter == ',' || caracter == EOF || isspace(caracter)) //una vez que sale, si el ultimo caracter es un , o un EOF o un espacio -> lo devuelvo y corto cadena (esto pasa siempre).
            {
                ungetc(caracter,stdin);
                TOKEN.buffer[contador]='\0';
            }
            TOKEN.tipo = CAD;
            return TOKEN;
    }

if(caracter == EOF) // por si es fin del archivo
    {
        TOKEN.tipo = FDT;
        return TOKEN;
    }
  }



#include "scanner.h"

int main()
{
     printf("Llamando al token: %s \n",TOKEN.buffer);
do
{
    TOKEN = get_token();

    switch(TOKEN.tipo)
    {
    case CAD:
        printf("Cadena: %s \n",TOKEN.buffer);
    break;
    case SEP:
        printf("Separador: %s \n",TOKEN.buffer);
	break;
	case FDT:
        printf("Fin de Texto:");
	break;
    }
}
while(TOKEN.tipo != FDT);

    return 0;
}

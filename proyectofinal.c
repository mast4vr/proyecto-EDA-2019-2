#include <stdio.h> //Libreria por defecto, utilizada para manipular la entrada(teclado) y salida(pantalla) del programa
#include <unistd.h> //Esta libreria se ocupa para la funcion Sleep y para dar color al programa
#include "funciones.h"

/*La funcion gotoxy sirve para determinar la posicion x y la posicion y de nuestro texto*/
 //FUNCIONES

 
 
void UNAM(); //Funcion prototipo de la portada UNAM
void matriz();  //Funcion prototipo de la primera opcion del menu

int complejo();  //Funcion prototipo de la segunda opcion del menu
void polinomios(); //Funcion prototipo de la tercera opcion del menu
void salida(); //Funcion prototipo de la cuarta opcion del menu





int main(){                                      //FUNCION PRINCIPAL

	Sleep(2000); //Detenemos la ejecucion del programa por unos segundos para ampliar la pantalla y que se pueda apreciar mejor
	UNAM();  
	system("cls"); //Limpia por completo la pantalla

	int opcion;  //Variable que nos ayudara a escoger la opcion a realizar del menu

    do{ //Este ciclo while repite las opciones del menu hasta que la opcion sea igual a 4, lo cual indica la salida del usuario
	system("color 9F"); //Se le asigna color al fondo de pantalla y al texto
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t\t=========================================================\n");
	printf("\t\t\t\t\t\t=        UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO        =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=                     PROYECTO FINAL                    =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=              ESTRUCTURA DE DATOS Y ALGORITMOS         =\n");
	printf("\t\t\t\t\t\t=========================================================\n");
    printf("\n\n");
	printf("\t\t\t\t\t\t         LISTA DE OPERACIONES QUE PUEDES REALIZAR        \n");
	printf("\t\t\t\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t\t\t\t=========================================================\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=                  1)SUMA MATRICES                      =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
    printf("\t\t\t\t\t\t=                  2)NUMEROS COMPLEJOS                  =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=                  3)POLINOMIOS                         =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=========================================================\n");
	printf("\n\n");
	printf("\t\t\t\t\t\t=========================================================\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=                         4)SALIR                       =\n");
	printf("\t\t\t\t\t\t=                                                       =\n");
	printf("\t\t\t\t\t\t=========================================================\n");

	gotoxy(10,37); printf("INTRODUZCA LA OPERACION QUE DESEA REALIZAR: ");
	scanf("%i",&opcion);
	gotoxy(10,38); printf("-------------------------------------------------------");
    Sleep(1000);
    switch(opcion){  //Este ciclo switch se utiliza para seleccionar las opciones del menu
    	case 1: //Se llama a la funcion matriz
		system("cls");
	    matriz();
	    system("cls");
	    break;
	    case 2:  //Se llama a la funcion complejos
	    system("cls");
	    complejo();
	    system("cls");
	    break;
	    case 3:  //Se llama a la funcion polinomios
		system("cls");
		polinomios();
		system("cls");
		break;
		case 4: //Se limpia la pantalla para llamar a la funcion salir
		system("cls");
		break;
	    default:  //En caso de que se introduzca un numero que no pertenezca a las opciones, se limpiara la pantalla y el menu aparecera de nuevo
	    gotoxy(10,40); printf("OPCION NO VALIDA, INTRODUZCA OTRA OPCION\n");
	    Sleep(1500);
		system("cls");
    	}
    }while(opcion!=4); //Hasta que la opcion sea igual a 4 el usuario podra salir del programa

    salida();  //Funcion que termina con la ejecucion del programa
    return 0;
}


 //FUNCION QUE IMPRIME LA PORTADA CON LA PALABRA UNAM
void UNAM(){
	int altura,barra;
	int posicionx=15;
	int posiciony=12;

	//Primer digito = Color del Fondo de Pantalla; Segundo digito = Color del texto
	system("color F9"); //Se imprime la U
	//Se llama a la funcion gotoxy de la libreria "#include <gotoxy.h>" para localizar al printf en la posicion deseada
	gotoxy(posicionx,posiciony);    printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+1);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+2);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+3);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+4);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+5);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+6);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+7);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+8);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+9);  printf("UUUUUU        UUUUUU");
	gotoxy(posicionx,posiciony+10); printf("UUUUUUU      UUUUUUU");
	gotoxy(posicionx,posiciony+11); printf(" UUUUUUUU  UUUUUUUU");
	gotoxy(posicionx,posiciony+12); printf("  UUUUUUUUUUUUUUUU ");
	gotoxy(posicionx,posiciony+13); printf("   UUUUUUUUUUUUUU  ");
	gotoxy(posicionx,posiciony+14); printf("      UUUUUUUU    ");
	Sleep(500); //Esta funcion detiene la ejecucion del programa por el tiempo que deseemos

	posicionx=45;

	system("color F6"); //Se imprime la N
	gotoxy(posicionx,posiciony);    printf("NNNNN               NNNNN");
	gotoxy(posicionx,posiciony+1);  printf("NNNNNNN             NNNNN");
	gotoxy(posicionx,posiciony+2);  printf("NNNNNNN             NNNNN");
	gotoxy(posicionx,posiciony+3);  printf("NNNNN NNNNN         NNNNN");
	gotoxy(posicionx,posiciony+4);  printf("NNNNN NNNNN         NNNNN");
	gotoxy(posicionx,posiciony+5);  printf("NNNNN   NNNNN       NNNNN");
	gotoxy(posicionx,posiciony+6);  printf("NNNNN   NNNNN       NNNNN");
	gotoxy(posicionx,posiciony+7);  printf("NNNNN     NNNNN     NNNNN");
	gotoxy(posicionx,posiciony+8);  printf("NNNNN     NNNNN     NNNNN");
	gotoxy(posicionx,posiciony+9);  printf("NNNNN       NNNNN   NNNNN");
	gotoxy(posicionx,posiciony+10); printf("NNNNN       NNNNN   NNNNN");
	gotoxy(posicionx,posiciony+11); printf("NNNNN         NNNNN NNNNN");
	gotoxy(posicionx,posiciony+12); printf("NNNNN         NNNNN NNNNN");
	gotoxy(posicionx,posiciony+13); printf("NNNNN            NNNNNNNN");
	gotoxy(posicionx,posiciony+14); printf("NNNNN             NNNNNNN");
	Sleep(500);

	posicionx=79;

	system("color F9"); //Se imprime la A
	gotoxy(posicionx,posiciony);    printf("              AAAAAA");
	gotoxy(posicionx,posiciony+1);  printf("             AAAAAAAA");
	gotoxy(posicionx,posiciony+2);  printf("            AAAAAAAAAA");
	gotoxy(posicionx,posiciony+3);  printf("           AAAAA  AAAAA");
	gotoxy(posicionx,posiciony+4);  printf("          AAAAA    AAAAA");
	gotoxy(posicionx,posiciony+5);  printf("         AAAAA      AAAAA");
	gotoxy(posicionx,posiciony+6);  printf("        AAAAA        AAAAA");
	gotoxy(posicionx,posiciony+7);  printf("       AAAAAAAAAAAAAAAAAAAA");
	gotoxy(posicionx,posiciony+8);  printf("      AAAAAAAAAAAAAAAAAAAAAA");
	gotoxy(posicionx,posiciony+9);  printf("     AAAAAAA          AAAAAAA");
	gotoxy(posicionx,posiciony+10); printf("    AAAAAAA            AAAAAAA");
	gotoxy(posicionx,posiciony+11); printf("   AAAAAAA              AAAAAAA");
	gotoxy(posicionx,posiciony+12); printf("  AAAAAAA                AAAAAAA");
	gotoxy(posicionx,posiciony+13); printf(" AAAAAAA                  AAAAAAA");
	gotoxy(posicionx,posiciony+14); printf("AAAAAAA                    AAAAAAA");
	Sleep(500);

	posicionx=121;

    system("color F6"); //Se imprime la M
	gotoxy(posicionx,posiciony);    printf("MMMMMM                    MMMMMM");
	gotoxy(posicionx,posiciony+1);  printf("MMMMMMM                  MMMMMMM");
	gotoxy(posicionx,posiciony+2);  printf("MMMMMMMM                MMMMMMMM");
	gotoxy(posicionx,posiciony+3);  printf("MMMMM MMMMM          MMMMM MMMMM");
	gotoxy(posicionx,posiciony+4);  printf("MMMMM MMMMM          MMMMM MMMMM");
	gotoxy(posicionx,posiciony+5);  printf("MMMMM   MMMMM      MMMMM   MMMMM");
	gotoxy(posicionx,posiciony+6);  printf("MMMMM   MMMMM      MMMMM   MMMMM");
	gotoxy(posicionx,posiciony+7);  printf("MMMMM     MMMM    MMMM     MMMMM");
	gotoxy(posicionx,posiciony+8);  printf("MMMMM     MMMMMMMMMMMM     MMMMM");
	gotoxy(posicionx,posiciony+9);  printf("MMMMM        MMMMMM        MMMMM");
	gotoxy(posicionx,posiciony+10); printf("MMMMM                      MMMMM");
	gotoxy(posicionx,posiciony+11); printf("MMMMM                      MMMMM");
	gotoxy(posicionx,posiciony+12); printf("MMMMM                      MMMMM");
	gotoxy(posicionx,posiciony+13); printf("MMMMM                      MMMMM");
	gotoxy(posicionx,posiciony+14); printf("MMMMM                      MMMMM");
	Sleep(500);

	system("color F0");
	//Se imprime la barra negra
	for(altura=28;altura<29;altura++){
		for(barra=11;barra<=156;barra++){
			gotoxy(barra,altura); printf("%c",219);
		}
	}
	Sleep(1200);
	system("color FC");
	gotoxy(70,30); printf("FACULTAD DE INGENIERIA");
	Sleep(1800);
}


//FUNCION QUE TERMINA EL PROGRAMA
void salida(){
	system("cls");
	system("color CF");
	gotoxy(60,5); printf("- - - - - FACULTAD DE INGENIERIA - - - - -");
	gotoxy(60,10); printf("         * * * PROYECTO FINAL * * *");
	gotoxy(75,20); printf("HASTA LUEGO! :)");
	gotoxy(115,29); printf("      - Desarrollado por -");
	gotoxy(115,31); printf("* Cardenas Loredo Willberth Germán");
	gotoxy(115,32); printf("* Jaime Farfan Luis Fernando");
	gotoxy(115,33); printf("* Sanchez Rojo Juan Pablo");
	gotoxy(115,34); printf("*Ortiz Velazquez Daniela");
	gotoxy(115,35); printf("* -----------------------------");
	gotoxy(115,36); printf("* --------------------------------");
	gotoxy(115,37); printf("* --------------------------------");
	gotoxy(1,38); printf(".");
}

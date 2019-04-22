#include<windows.h>
#include<stdio.h>


void gotoxy2(int x,int y);



void matriz();  //Funcion prototipo de la primera opcion del menu
int complejo();  //Funcion prototipo de la segunda opcion del menu
void polinomios(); 




int menu();
int datos_entrada();
int fsuma(int*sum1,int*sum2);
int fresta1(int*rest1,int*rest2);
int fresta2(int*rest2a,int*rest2b);
int fmulti(int*multi1,int*multi2);
int fdiv1(int*div1,int*div2);
int fdiv2(int*div2a,int*div2b);

void gotoxy(int x,int y){

	  HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
  }
  
  
  void matriz(){
    system("color F0");
	Sleep(1000);

	system("clear"); //Limpiamos la pantalla para ingresar los datos del primer lugar
	
	int m1[50][50], m2[50][50], m3[50][50], f1,f2,c1,c2,a,b;
	int sum;
	
	do{
		printf("filas de la matriz 1:");
	scanf("%i", &f1);
		printf("columnas de la matriz 1:");
	scanf("%i", &c1);
		printf("filas de la matriz 2:");
	scanf("%i", &f2);
		printf("columnas de la matriz 2:");
	scanf("%i", &c2);	
		
	}
	while((f1 != f2 ||  c2 != c1) || (f1!=c2));

	
	
		FILE *archivo1;
	archivo1 = fopen("matriz.txt","w");
	if(archivo1==NULL){
		perror("error en la creacion del archivo");
	}
	else{
		
			for(a=0; a<f1; a++)
	{
		for(b=0; b<c1; b++)
		{
			printf("Ingrese los valores de la primera matriz [%i][%i]=",a,b);
			scanf("%i",&m1[a][b]);
		}
	}
	system("clear");
	
		for(a=0; a<f2; a++)
	{
		for(b=0; b<c2; b++)
		{
			printf("Ingrese los valores de la segunda matriz [%i][%i]=",a,b);
			scanf("%d",&m2[a][b]);
		}
	}
	system("clear");
	printf("\nLa matriz 1 es:");
		for(a=0; a<f1; a++)
	{
		printf("\n");
		for(b=0; b<c1; b++)
		{
			printf("%d",m1[a][b]);
			fprintf(archivo1, "%i", m1[a][b] );
		}
		
	}
printf("\n\n");
printf("\nLa matriz 2 es:");
		for(a=0; a<f2; a++)
	{
		printf("\n");
		for(b=0; b<c2; b++)
		{
			printf("%d",m2[a][b]);
			fprintf(archivo1, "%i", m2[a][b] );
		}
		
	
	}
	printf("\n");
	printf("La suma de las matrices es:\n");
for(a=0; a<f1; a++)
{
	printf("\n");
	for(b=0; b<c1; b++)
	{
		m3[a][b]=m1[a][b]+m2[a][b];
		printf("%5d",m3[a][b]);
		fprintf(archivo1, "%i", m3[a][b] );
	
	}
			
}
	
	}
		
	system("color F1");
    system("color F2");

	   system("color F3");

	 //Se teclea un numero para finalizar la funcion
	   int finalizar;
	   printf("\n\n\tTeclea un numero y presiona ENTER para continuar: ");
	   scanf("%d",&finalizar);
}


struct complejos{
  int a,b;
}com1,com2,suma,resta,division,produc;



int complejo(){
  int p,opcion;
  datos_entrada();
  opcion=menu();
  	FILE *archivo2;
	archivo2 = fopen("complejos.txt","w+");
  
           switch(opcion){
              case 1:
                fsuma(&suma.a,&suma.b);
                printf("\nC[1]+C[2]=%d+%di",suma.a,suma.b);
                return menu();
                break;
              case 2:
                printf("\nEn que orden quieres restar:\n 1.- C[1]-C[2]: \n 2.- C[2]-C[1]:\n");
                scanf("%d",&p);
                if(p==1){
	        fresta1(&resta.a,&resta.b);
	        printf("\nC[1]-C[2]=%d+%di",resta.a,resta.b);
                   }
                else if(p==2){
	        fresta2(&resta.a,&resta.b);
	        printf("\nC[2]-C[1]=%d+%di",resta.a,resta.b);
                     }
                return menu();
                break;
              case 3:
                fmulti(&produc.a,&produc.b);
                printf("\nC[1]xC[2]=%d+%di",produc.a,produc.b);
                return menu();
                break;
              case 4:
                printf("\n¿En que orden los quiere dividir?\n1.- C[1]/C[2]:\n2.- C[2]/C[1]\n");
                scanf("%d",&p);
                if(p==1){
	        fdiv1(&division.a,&division.b);
	        printf("\nC[1]/C[2]=%d+%di",division.a,division.b);
                     }
                else if(p==2){
	        fdiv2(&division.a,&division.b);
	        printf("\nC[2]/C[1]=%d+%di",division.a,division.b);
                    }
                return menu();
                break;
              default:
                printf("\nNo existe esta opcion, por favor deja de jugar con la calculadora");
                break;
         }
   

	system("color F5");
    int salida;
    printf("\n\n\tIntroduce un numero y presiona ENTER para continuar: ");
    scanf("%d",&salida);
  return 0;
}


int menu(){
  int opcion;
    printf("\n1.Suma. \n2.Resta. \n3.Multiplicacion. \n4.Division.");
    printf("\nEscoge una opcion: \n");
    scanf("%d",&opcion);
    return opcion;

  }

int datos_entrada(){
  printf("\nOperaciones con nunmeros complejos...\n\nDe la forma c=a+bi");
  printf("\nIntroduce C[1]a:");
  scanf("%d",&com1.a);
  printf("introduce C[1]b:");
  scanf("%d",&com1.b);
  printf("\nIntroduce C[2]a:");
  scanf("%d",&com2.a);
  printf("Introduce C[2]b:");
  scanf("%d",&com2.b);
  printf("\nC[1]=%d+%di",com1.a,com1.b);
  printf("\nC[2]=%d+%di\n",com2.a,com2.b);
 }

int fsuma(int*sum1,int*sum2){
  *sum1=com1.a+com2.a;
  *sum2=com1.b+com2.b;

 }
int fresta1(int*rest11,int*rest21){
  *rest11=com1.a-com2.a;
  *rest21=com1.b-com2.b;
 }
int fresta2(int*rest2a,int*rest2b){
  *rest2a=com2.a-com1.a;
  *rest2b=com2.b-com1.b;
 }
int fmulti(int*multi1,int*multi2){
    *multi1=(com1.a*com2.a)-(com1.b*com2.b);
    *multi2=(com2.a*com1.b)+(com1.a*com2.b);
 }

int fdiv1(int*division1,int*division2){
    *division1=((com1.a*com2.a)+(com1.b*com2.b))/((com2.a*com2.a)+(com2.b*com2.b));
    *division2=((com1.b*com2.a)-(com1.a*com2.b))/((com2.a*com2.a)+(com2.b*com2.b));
 }

int fdiv2(int*division2a,int*division2b){
    *division2a=((com2.a*com1.a)+(com2.b*com1.b))/((com1.a*com1.a)+(com1.b*com1.b));
    *division2b=((com2.b*com1.a)-(com2.a*com1.b))/((com1.a*com1.a)+(com1.b*com1.b));
 }







void polinomios(){ 

	int n, m, i;
	float poli1[51]={0}, poli2[51]={0};
	char x[51][5]={{"x"},{"x^2"},{"x^3"},{"x^4"},{"x^5"},{"x^6"},{"x^7"},{"x^8"},{"x^9"},{"x^10"},
  {"x^11"},{"x^12"},{"x^13"},{"x^14"},{"x^15"},{"x^16"},{"x^17"},{"x^18"},{"x^19"},{"x^20"},
  {"x^21"},{"x^22"},{"x^23"},{"x^24"},{"x^25"},{"x^26"},{"x^27"},{"x^28"},{"x^29"},{"x^30"},
  {"x^31"},{"x^32"},{"x^33"},{"x^34"},{"x^35"},{"x^36"},{"x^37"},{"x^38"},{"x^39"},{"x^40"},
  {"x^41"},{"x^42"},{"x^43"},{"x^44"},{"x^45"},{"x^46"},{"x^47"},{"x^48"},{"x^49"},{"x^50"}};


		FILE *archivo3;
	archivo3 = fopen("polinomios.txt","w");


  	do{
			printf("introducir el grado maximo de p1(x): ");
			scanf("%d", &n);
		}
    while(n<0 || n>51);
		for(i=0; i<=n; i++){
			scanf("%f", &poli1[i]);
		}
		do{
			printf("introducir el grado maximo de p2(x): ");
			scanf("%d", &m);
		}while(m<0 || m>51);
		for(i=0; i<=m; i++){
			scanf("%f", &poli2[i]);
		}
		if(poli1[0]!=0){
			printf("\np1(x) %+g", poli1[0]);
			fprintf(archivo3, "p1(x) %i", poli1[0]);
			i=1;
		}else{
			i=0;
		}
		for(i=i; i<=n; i++){
			while(poli1[i]==0) i++;
			printf(" %+g%s", poli1[i], x[i-1]);
		}
		if(poli2[0]!=0){
			printf("\np2(x) %+g", poli2[0]);
			fprintf(archivo3, "p2(x) %i", poli2[0]);
			i=1;
		}else{
			i=0;
		}
		for(i=i; i<=m; i++){
			while(poli2==0) i++;
			printf(" %+g%s", poli2[i], x[i-1]);
		}
		if(m>n) 
			n=m;
		printf("\n\nsuma: %+g", poli1[0]+poli2[0]);
	    fprintf(archivo3, "\n\nsuma: %i", poli1[0]+poli2[0] );
		for(i=1; i<=n; i++){

			while((poli1[i]+poli2[i])==0 && i<n) i++;
            printf(" %+g%s", poli1[i]+poli2[i], x[i-1]);
            		}
		printf("\n");

  
  	
	
	
	
	
	
	
	
/*
 int j[2][3];
  int h,k;
  int vc[3]={};
  char t;
  system("cls");
  gotoxy2(80,0);
  printf("Suma de polinomios");
  printf("\n( X^2+ X+  ) + (  X^2+ X+  )");
  gotoxy2(0,3);
  printf("Escribe el valor de los coeficientes y del termino independiente");
  gotoxy2(2,2);
  scanf("%i",&j[0][0]);
  gotoxy2(7,2);
  scanf("%i",&j[0][1]);
  gotoxy2(10,2);
  scanf("%i",&j[0][2]);
  gotoxy2(18,2);
  scanf("%i",&j[1][0]);
  gotoxy2(23,2);
  scanf("%i",&j[1][1]);
  gotoxy2(26,2);
  scanf("%i",&j[1][2]);
  // t=getchar();
  // putchar(t);
  for(k=0;k<3;k++)
    {
      for(h=0;h<2;h++)
        {
	  vc[k]= vc[k]+j[h][k];
        }
    }
  if(vc[0]==0&&vc[1]!=0&&vc[2]!=0){
    printf("\nEl resultado es:");
    printf("\n%iX+%i",vc[1],vc[2]);
    printf("\n"); }
  else if(vc[1]==0&&vc[0]!=0&&vc[2]!=0){
    printf("\nEl resultado es:");
    printf("\n%iX^2+%i",vc[0],vc[2]);
    printf("\n"); }
  else if(vc[2]==0&&vc[1]!=0&&vc[0]!=0){
    printf("\nEl resultado es:");
    printf("\n%iX^2+%iX",vc[0],vc[1]);
    printf("\n");
  }
  else if(vc[0]==0&&vc[1]==0&&vc[2]!=0){
    printf("\nEl resultado es:");
    printf("\n%i",vc[2]);
    printf("\n");
  }
  else if(vc[1]==0&&vc[2]==0&&vc[0]!=0){
    printf("\nEl resultado es:");
    printf("\n%iX^2",vc[0]);
    printf("\n");
  }
  else if(vc[0]==0&&vc[2]==0&&vc[1]!=0){
    printf("\nEl resultado es:");
    printf("\n%iX",vc[1]);
    printf("\n");
  }
  else if(vc[0]!=0&&vc[1]!=0&&vc[2]!=0) {
    printf("\nEl resultado es:");
    printf("\n%iX^2+%iX+%i",vc[0],vc[1],vc[2]);
    printf("\n");
  }
  else if(vc[0]==0&&vc[1]==0&&vc[2]==0){
    printf("\nEl resultado es:");
    printf("\n 0");
    printf("\n");
  }  */
  
	system("color F0");
    int salida;
    printf("\n\n\tIntroduce un numero y presiona ENTER para continuar: ");
    scanf("%d",&salida);
    

	

}

void gotoxy2(int x,int y)
{
  printf("%c[%d;%df",0x1B,y,x);
}






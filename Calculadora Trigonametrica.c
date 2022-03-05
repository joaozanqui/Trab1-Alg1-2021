#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gReiniciar, gTipoang;

double rad(double ang)
{
	double angrad;
	angrad = ang*M_PI/180;
	
	return angrad;
}

void recalc()
{
	printf("\n\tPara realizar outro calculo com o mesmo angulo - Digite '1'\n");
	printf("\tPara realizar outro calculo com um angulo diferente - Digite '2'\n");
	printf("\tPara finalizar digite qualquer outro numero\n\t\t");
	scanf("%d", &gReiniciar);
}

int tipo()
{
	int tipocalc;
	
	printf("\nEscolha o calculo desejado:\n");
		printf("Seno - Digite '1'\nCosseno - Digite'2'\nTangente - Digite '3'\n");
		printf("Secante - Digite '4'\nCossecante - Digite '5'\nCotangente - Digite '6'\n");
		
		do{
			printf("\t");
			scanf("%d", &tipocalc);
			if(tipocalc!=1 && tipocalc!=2 && tipocalc!=3 && tipocalc!=4 && tipocalc!=5 && tipocalc!=6)
				printf("Opcao inexistente, digite novamente\n");
		}while(tipocalc!=1 && tipocalc!=2 && tipocalc!=3 && tipocalc!=4 && tipocalc!=5 && tipocalc!=6);
		
	return tipocalc;
}

void arc(double r, int op)
{
	if(gTipoang==1)
		{
			if(op==1)
				printf("\tO Arco-Seno de %.2lf vale %.2lf radianos\n\n", r, asin(r));
			else if(op==2)
				printf("\tO Arco-Cosseno de %.2lf vale %.2lf radianos\n\n", r, acos(r));
			else if(op==3)
				printf("\tO Arco-tangente de %.2lf vale %.2lf radianos\n\n", r, atan(r));
			else if(op==5)
				printf("\tO Arco-Seno de %.2lf vale %.2lf radianos\n\n", 1/r, asin(1/r));
			else if(op==4)
				printf("\tO Arco-Cosseno de %.2lf vale %.2lf radianos\n\n", 1/r, acos(1/r));
			else if(op==6)
				printf("\tO Arco-tangente de %.2lf vale %.2lf radianos\n\n", 1/r, atan(1/r));	
		}
		else if(gTipoang==2)
		{
			if(op==1)
				printf("\tO Arco-Seno de %.2lf vale %.2lf graus\n\n", r, asin(r)*180/M_PI);
			else if(op==2)
				printf("\tO Arco-Cosseno de %.2lf vale %.2lf graus\n\n", r, acos(r)*180/M_PI);
			else if(op==3)
				printf("\tO Arco-tangente de %.2lf vale %.2lf graus\n\n", r, atan(r)*180/M_PI);
			else if(op==5)
				printf("\tO Arco-Seno de %.2lf vale %.2lf graus\n\n", 1/r, asin(1/r)*180/M_PI);
			else if(op==4)	
				printf("\tO Arco-Cosseno de %.2lf vale %.2lf graus\n\n", 1/r, acos(1/r)*180/M_PI);
			else if(op==6)	
				printf("\tO Arco-tangente de %.2lf vale %.2lf graus\n\n", 1/r, atan(1/r)*180/M_PI);	
		}
}

void calc(double ang)
{
	int tip;
	double valor;
	
	do {
		
		tip=tipo();
		system("cls");
				
		switch(tip)
		{
			case 1: 
					valor=sin(ang);
					if(gTipoang==1) 
						printf("\n\tO Seno de %.2lf radianos vale %.2lf\n", ang, valor);	
					else if(gTipoang==2) 
						printf("\n\tO Seno de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);
			break;
			case 2: 
					valor=cos(ang);
					if(gTipoang==1) 
						printf("\n\tO Cosseno de %.2lf radianos vale %.2lf\n", ang, valor);	
					else if(gTipoang==2) 
						printf("\n\tO Coseno de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);	
			break;
			case 3: 
					valor=tan(ang);
					if(gTipoang==1) 
						printf("\n\tA Tangente de %.2lf radianos vale %.2lf\n", ang, valor);	
					else if(gTipoang==2)
						printf("\n\tA Tangente de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);	
			break;
			case 4: 
					valor=1/(cos(ang));
					if(gTipoang==1)
						printf("\n\tA Secante de %.2lf radianos vale %.2lf\n", ang, valor);	
					else if(gTipoang==2)
						printf("\n\tA Secante de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);	
			break;
			case 5: 
					valor=1/(sin(ang));
					if(gTipoang==1)
						printf("\n\tA Cossecante de %.2lf radianos vale %.2lf\n", ang, valor);
					else if(gTipoang==2)
						printf("\n\tA Cossecante de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);	
			break;
			case 6: 
					valor=1/(tan(ang));
					if(gTipoang==1)
						printf("\n\tA Cotangente de %.2lf radianos vale %.2lf\n", ang, valor);	
					else if(gTipoang==2)
						printf("\n\tA Cotangente de %.1lf graus vale %.2lf\n", ang*180/M_PI, valor);	
			break;
		}	
		
		arc(valor, tip);
		
		system("pause");
		system("cls");
		
		recalc();
		
		if(gReiniciar==1) 
			system("cls");
		else break;
		
	}while(gReiniciar==1);
	
}

int main()
{
	double ang;
	
	do{
		printf("Escolha uma opcao:\nAngulo em Radianos - Digite '1'\nAngulo em Graus - Digite '2'\n");
	
		do{
			printf("\t");
			scanf("%d", &gTipoang);
			if(gTipoang!=1 && gTipoang!=2)
				printf("Opcao inexistente, digite novamente\n");
		}while(gTipoang!=1 && gTipoang!=2);
		system("cls");
		
		printf("Digite o angulo: ");
		scanf("%lf", &ang);
		
		if(gTipoang==2) 
			ang=rad(ang);
		
		calc(ang);
		
		if(gReiniciar==2)
			system("cls");
		else break;
		
	}while(gReiniciar==2);
}

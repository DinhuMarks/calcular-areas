#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*FUNÇÃO SOMA*/
int soma(){
float soma,a,b;
system("cls");
	printf("\t\t##--PROGRAMA SOMA--##\n\n");
	printf("1:\t");
	scanf("%f",&a);
	printf("\t+\n");
	printf("2:\t");
	scanf("%f",&b);
		soma = a+b;
    printf("\t_____\n");
	printf("\t%0.1f\n",soma);
	system("pause");
}

/*FUNÇÃO MULTIPLICAÇÃO*/
int multiplica(){
float mult,a,b;
system("cls");
	printf("\t\t##--PROGRAMA MULTIPLICACAO--##\n\n");
	printf("1:\t");
	scanf("%f",&a);
	printf("\t*\n");
	printf("2:\t");
	scanf("%f",&b);
		mult = a*b;
	printf("\t_____\n");
	printf("\t%0.1f\n",mult);
	system("pause");
}

/*FUNÇÃO DIVISÃO*/
int divisao(){
float div,a,b;
system("cls");
	printf("\t\t##--PROGRAMA DIVISAO--##\n\n");
	printf("1:\t");
	scanf("%f",&a);
	printf("\t/\n");
	printf("2:\t");
	scanf("%f",&b);
		if(b <= 0)
			printf("\t\tAtencao!!\nNao existe divisao por 0(zero)\n\n");
		if(b > 0){
			div = a/b;
			printf("\t_____\n");
			printf("\t%0.1f\n",div);
		}
	system("pause");
}

/*FUNÇÃO SUBTRAÇÃO*/
int subtracao(){
float sub,a,b;
system("cls");
	printf("\t\t##--PROGRAMA SUBTRACAO--##\n\n");
	printf("1:\t");
	scanf("%f",&a);
	printf("\t-\n");
	printf("2:\t");
	scanf("%f",&b);
		sub = a-b;
	printf("\t_____\n");
	printf("\t%0.1f\n",sub);
	system("pause");
}

/*FUNÇÃO BÁSCARA*/
int f_bascara(){
int delta, a, b, c;
system("cls");
	printf("\t\t##--FORMULA DE BASCARA--##\n\n");
	printf("Delta = b^2 - 4 * a * c\n");
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
delta = (b*b) - ((4*a) * c);
	printf("\nDelta = %d\n",delta);
	if(delta < 0){
		printf("\tDelta negativo!!\nImpossivel continuar com a operacao!\n");
	}else{
		printf("\tDelta positivo.\nProssiga com o calculo!\n");
	}
	system("pause");
}

/*FUNÇÃO DA TABUADA*/
int tabuada(){
    system("cls");
int cont = 0,i,n, result;

printf("\t\t\tPROGRAMA TABUADA\nTabuda de Multiplicacao: ");
scanf("%d",&n);printf("\n");

for(i = 0; i <= 9; i++){
    cont = cont + 1;
    result = n * cont;
    printf("-> %d * %d = %d\n",n,cont, result);
}
}
//*AQUI COMEÇA O PROGRAMA DE FATO*//
int main(void){
	int opc;

	while(opc!=7)
	{   printf("\t\t### CALCULADORA ###\n\n");
		printf("1-Soma\n2-Multiplicacao\n3-Dividir\n4-Subtrair\n5-Formula Bascara\n6-Tabuada\n7-Sair\n\nOpcao: ");
		scanf("%d",&opc);
		switch(opc)
		{
		case(1):
			soma();
			break;
		case(2):
			multiplica();
			break;
		case(3):
			divisao();
			break;
		case(4):
			subtracao();
			break;
		case(5):
			f_bascara();
			break;
        case(6):
            tabuada();
		}
		if((opc > 7) || (opc < 1)){
			system("cls");
			printf("\t\tOpcao %d nao existe!!\n\n\tNao seja burro e digite novamente!\n\n",opc);
			system("pause");
		}
			printf("\n\n");
	}
	system("cls");
	printf("\n\t\t\t\tObrigado!\n\n");
getch();
}

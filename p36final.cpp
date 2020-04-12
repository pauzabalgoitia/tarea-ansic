#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<time.h>

int dado1, dado2,i,n,saldo,suma;
void marco1();
void marco2();
main()
{
	textcolor (GREEN); textbackground(BLACK);
	clrscr;
	printf("Numero al que desea llegar: ");
	scanf("%d",&n);
	saldo =100;
	printf("%d",suma);
	srand(time(NULL));
	for(;;)
	{
		clrscr;
		marco1();
		dado1 =rand()%5;
		gotoxy (28,10); printf("%d",dado1);
		marco2();
		dado2 =rand()%5;
		gotoxy(45,10); printf("%d",dado2);
		suma= dado1+dado2;
		gotoxy(70,10);
		if(suma==n)
		 printf("ganaste");
		else 
		printf("Perdiste");
		gotoxy (90,5);
		if(suma==n)
		{
		saldo =saldo +5;
		printf("Saldo: %d",saldo);
		}
		else
		{
		saldo =saldo-1;
		printf("Saldo: %d",saldo);
		}
		gotoxy(50,10); getche();
	}
}
void marco1()
{
	for(i=20; i<=35; i++)//lineas horizintales
	{
		gotoxy(i,7); printf("%c",178);
		gotoxy(i,15); printf("%c",178);
	}
	for (i=7; i<=15; i++)//lineas horizintales
	{
		gotoxy(20,i); printf("%c",178);
		gotoxy(35,i); printf("%c",178);
	}
}
void marco2()
{
	for(i=38; i<=53; i++)
	{
	gotoxy (i,7); printf ("%c", 178);
	gotoxy(i,15); printf("%c",178);
	}
	for (i=7; i<=15; i++)
	{
		gotoxy (38,i); printf("%c",178);
		gotoxy(53,i); printf("%c",178);
	}
}
   

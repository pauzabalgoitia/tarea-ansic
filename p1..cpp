#include<conio2.h>
#include<stdio.h>

float t,d,v;
main(){
	gotoxy(8,2); printf("indique el tiempo");
	gotoxy(10,5); scanf("%f",&t);
	gotoxy(12,7); printf("indique la distancia");
	gotoxy(14,9); scanf("%f",&d);
	v=d/t;
	gotoxy(16,20); printf("la velocidad es %.2f", v);
	getche();
}

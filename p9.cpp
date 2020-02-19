#include<stdio.h>
#include<conio2.h>
#include<math.h>
float g,ma,mb,r,f;
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("ingrese la masa 1: ");
		scanf("%f", &ma);
	gotoxy(30,7); printf("ingrese la masa 2: ");
		scanf("%f", &mb);	
	gotoxy(30,9); printf("ingrese el radio: ");
		scanf("%f", &r);
	f=g*ma*mb/pow(2,r);
	gotoxy(30,11); printf("la fuerza gravitacional es: %.3f", f);
	getche();
		
}


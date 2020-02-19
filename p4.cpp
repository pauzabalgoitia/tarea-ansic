#include<stdio.h>
#include<math.h>
#include<conio2.h>
#include<iostream>
float v0,a,t,vf;
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique la velocidad inicial: ");
	scanf("%f",&v0);
	gotoxy(30,7); printf("indique la aceleracion: ");
	scanf("%f",&a);
	gotoxy(30,9); printf("indique el tiempo: ");
	scanf("%f",&t);
	vf= v0+a*t;
	gotoxy(30,11); printf("la velocidad final es: %.2f",vf);
	getche();
	
}

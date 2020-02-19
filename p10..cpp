#include<stdio.h>
#include<conio2.h>
#include<math.h>
float v0,t,a,d;
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique la velocidad inicial: ");
	scanf("%f", &v0);
	gotoxy(30,7); printf("indique el tiempo: ");
	scanf("%f", &t);
	gotoxy(30,9); printf("indique la aceleracion: ");
	scanf("%f",&a);
	d=v0*t+0.5*a*pow(2,t);
	gotoxy(30,11); printf("la distancia es: %.2f",d);
	getche();
}

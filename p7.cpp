#include<stdio.h>
#include<math.h>
#include<conio2.h>
float vf,v0,t,a;
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique la velocidad final: ");
	scanf("%f",&vf);
	gotoxy(30,7); printf("indique la velocidad inicial: ");
	scanf("%f",&v0);
	gotoxy(30,9); printf("indique el tiempo: ");
	scanf("%f",&t);
	a=(vf-v0)/t;
	gotoxy(30,11); printf("la aceleracion es %.2f: ", a);
	getche();
}

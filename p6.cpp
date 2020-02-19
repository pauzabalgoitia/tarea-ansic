#include<stdio.h>
#include<math.h>
#include<conio2.h>
float m,v,d; 
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique la masa: ");
	scanf("%f",&m);
	gotoxy(30,7); printf("indique el volumen: ");
	scanf("%f",&v);
	d=m/v;
	gotoxy(30,9); printf("la densidad es: %.2f", d);
	getche();
	
}

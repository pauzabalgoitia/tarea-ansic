#include<stdio.h>
#include<math.h>
#include<conio2.h>
float r,v,p;
main(){
	textcolor(GREEN); textbackground(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique el radio: ");
	scanf("%f",&r);
		p=3.1416;
	v=(4/3)*p*r*r*r;
	gotoxy (30,7); printf("el volumen es: %.2f", v);
	getche();
	
}


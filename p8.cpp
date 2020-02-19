#include<stdio.h>
#include<conio2.h>
float r,p,pe;
main(){
	textcolor(GREEN); backgroundcolor(BLACK);
	clrscr;
	gotoxy(30,5); printf("indique el radio: ");
	scanf("%f", &r);
    p=3.1416;
    pe= 2*p*r;
    gotoxy(30,7); printf("El perimetro es : %.2f", pe);
    getche();
    
	
}

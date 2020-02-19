#include<stdio.h>
#include<conio2.h>
#include<math.h>
float p,r,a;
main(){
	p= 3.1416;
	gotoxy(30,5); printf("indique el radio ");
	scanf("%f",&r);
	a =p*pow(2,r);
	gotoxy(30,7); printf("el area es %.2f ",a);
	getche();
}
	

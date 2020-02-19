//generar e imprimir
//los primeros n numeros 
// enteros positivos
#include<stdio.h>
#include<conio2.h>
int n,i;
main(){
	textcolor(WHITE); textbackground(BLUE);
	clrscr();
	gotoxy(30,5); printf("# datos a imprimir ");
	scanf("%d", &n);
	gotoxy(20,7);
	for(i=1; i<n; i++)
	{
		printf("%d, ", i);
	}
	getche();
} 

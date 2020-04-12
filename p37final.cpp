#include<stdio.h>
#include<conio2.h>
#include<math.h>

int a,b,c,i,op;
float x,y,z,pi;
void marco(); void menu(); void op1(); void op2(); void op3(); void op4(); void op5(); void op6(); void op7(); void op8(); void op9();
main(){
	marco();
	menu();
	do{
		switch(op)
		{
			case 1: op1(); break;
			case 2: op2(); break;
			case 3: op3(); break;
			case 4: op4(); break;
		    case 5: op5(); break;
			case 6: op6(); break;
		    case 7: op7(); break;
	    	case 8: op8(); break;
		}
	}
	while(op!=9);	
}
void marco()
{
	textcolor(WHITE); textbackground(BLACK); clrscr;
	for(i=10; i<=70; i++)
	{
		gotoxy(i,5); printf("%c",178);
		gotoxy(i,20); printf("%c",178);
	}
	for(i=5; i<=20; i++)
	{
		gotoxy(10,i); printf("%c",178);
		gotoxy(70,i); printf("%c",178);
	}
}
void menu()
{
	gotoxy(20,3); printf("Menu funciones matematicas");
	gotoxy (20,7); printf("1.- Valor absoluto");
	gotoxy(20,8); printf("2.- Base de exponente");
	gotoxy(20,9); printf("3.- Seno de un numero");
	gotoxy(20,10); printf("4.- Coseno de un numero");
	gotoxy(20,11); printf("5.- Tangente de un numero");
	gotoxy(20,12); printf("6.- Raiz cuadrada de un numero");
	gotoxy(20,13); printf("7.- Hipotenusa de un triangulo rectangulo");
	gotoxy(20,14); printf("8.- Raiz cubica de un numero");
	gotoxy(20,15); printf("9.- Presione para salir");
	gotoxy (20,17); printf("Indique la operacion");
    scanf("%d",&op);
    clrscr();
}
void op1()
{
	marco(); 
	gotoxy(20,3); printf("Valor Absoluto");
	gotoxy(20,7); printf("Indique un valor"); scanf("%d",&a);
	b =fabs(a);
	gotoxy(20,9);printf("El valor absoluto es: %d",b);
}
void op2()
{
	marco();
	gotoxy(20,3); printf("Potencia");
	gotoxy(20,7); printf("Indique la base: "); scanf("%d",&a);
	gotoxy(20,8); printf("Indique el exponente: "); scanf("%d",&b);
	c =pow(a,b);
	gotoxy(20,9);printf("La potencia es: %d",c);

}
void op3()
{
	marco();
	gotoxy(20,3); printf("Seno");
	gotoxy(20,7); printf("Indique el numero: "); scanf("%d",&a);
	b= a;
	pi =3.1416;
	z= sin(b*pi/180);
    gotoxy(20,8); printf("El resultado del seno es: %.3f",z);

}
void op4()
{
	marco();
	gotoxy(20,3); printf("Coseno");
	gotoxy(20,7); printf("Indique el numero: "); scanf("%d",&a);
	pi =3.1416;
	z= cos(a*pi/180);
    gotoxy(20,8); printf("El resultado del coseno es: %.3f",z);
}
void op5()
{
	marco();
	gotoxy(20,3); printf("Coseno");
	gotoxy(20,7); printf("Indique el numero: "); scanf("%d",&a);
	pi =3.1416;
	z= tan(a*pi/180);
    gotoxy(20,8); printf("El resultado del tan es: %.3f",z);
}
void op6()
{
	marco();
	gotoxy(20,3); printf("Raiz cuadrada");
	gotoxy(20,7); printf("Indique el numero: "); scanf("%d",&a);
	z= sqrt(a);
    gotoxy(20,8); printf("El resultado de la raiz es: %.3f",z);
}
void op7()
{
	marco();
	gotoxy(20,3); printf("Hipotenuso");
	gotoxy(20,7); printf("Indique el cateto opuesto: "); scanf("%f",&x);
    gotoxy(20,8); printf("Indique el cateto adyacente: "); scanf("%f",&y);
	z= hypot(x,y);
    gotoxy(20,9); printf("El resultado de la hipotenusa es: %.3f",z);
}
void op8()
{
	marco();
	gotoxy(20,3); printf("Raiz cubica");
	gotoxy(20,7); printf("Indique el numero: "); scanf("%d",&a);
	z= cbrt(a);
    gotoxy(20,8); printf("El resultado de la raiz cubica es: %.3f",z);
}










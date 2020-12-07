#include<iostream>
#include<stdio.h>
#include<conio.h>

main()
{
	float a,b,d,c;
	printf("\n MENGHITUNG RATA-RATA NILAI 3 DATA \n\n");
	printf("\n Masukkan Nilai ke 1\t:");scanf("%f",&a);
	printf("\n Masukkan Nilai ke 2\t:");scanf("%f",&b);
	printf("\n Masukkan Nilai ke 3\t:");scanf("%f",&c);
	d=(a+b+c)/3;
	printf("\n HASIL RATA-RATA 3 DATA:%.2f",d);
	printf("\n\t\t pusing");
	getch();
}  

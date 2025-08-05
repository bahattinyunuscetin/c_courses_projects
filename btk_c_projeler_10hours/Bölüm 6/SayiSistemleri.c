/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde bir değişkene
 * farklı sayı sistemlerinde değer atama
 */

#include <stdio.h>
int main()
{
	int a=35;  // 10'luk sayı düzeninde (decimal)
	int b=0b00100011; // 2'lik sayı düzeninde (binary)
	int c=0x23; // 16'lık sayı düzeninde (hexadecimal)
	
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	printf("c= %d\n",c);
	
	return 0;
}
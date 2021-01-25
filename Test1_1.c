#include <stdio.h>
void show(char a) 
{
	printf("%c",a);
}
int count;
void main(void) 
{
	show('z');
	count++;
}
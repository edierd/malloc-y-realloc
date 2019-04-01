#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *p_nombre,*p_nombreCompleto; 
	
	p_nombre = malloc(10*sizeof(char)); //reservar memoria para 10 espacios
	
	strcpy(p_nombre,"edierd");
	
	printf("Nombre: %s",p_nombre); 
	
	p_nombreCompleto= realloc(p_nombre,30*sizeof(char));
	
	strcat(p_nombreCompleto," ospina giraldo");
	
	printf("\nNombre: %s",p_nombreCompleto);
	
	free(p_nombreCompleto);
	return 0;
}

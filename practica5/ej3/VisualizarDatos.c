#include "cabecera.h"

extern char Colores[10][10];
extern char TiposPrendas[8][10];

void ErrorMemoria(tCadena cadena, char *pcadena)
{
  printf("Error al reservar la memoria de %s\n",pcadena);
  LiberaMemoria(cadena);
  exit(-1);
}

void VisuCadena( tCadena cadena){}

// void VisuContacto(tContacto contacto);
// void VisuPrenda(tPrenda prenda);
// void VisuTienda(tTienda tienda);
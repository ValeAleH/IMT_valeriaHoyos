#ifndef FUNCIONES_H
#define FUNCIONES_H

//ejercicio1
void saludo(void);
void clasificarNumero(int numero);

//ejercicio2
void saludo1(void);
int contarDigitos(int numero);

//ejercicio3
typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
void saludo2(void);
void mostrarEstado(Semaforo estado);

//ejercicio4
void saludo3(void);
int acumularSuma(int sumaActual, int nuevoValor);

//ejercicio5
void saludo4(void);
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

//ejercicio6
void saludo5(void);
void compararNumeros(int a, int b);

//ejercicio7
void saludo6(void);
int esMultiploDe3(int numero);

//ejercicio8
void saludo7(void);
unsigned long long factorial(int numero);

//ejercicio9
void saludo8(void);
int invertirNumero(int numero);

#endif 

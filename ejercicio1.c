#include <stdio.h>

int main() {
    float numero, mitad, quintaParte;

    // Solicitar al usuario que ingrese un n�mero
    printf("Ingrese un n�mero: ");
    scanf("%f", &numero);

    // Calcular la mitad y la quinta parte del n�mero
    mitad = numero / 2;
    quintaParte = numero / 5;

    // Calcular la suma de la mitad y la quinta parte
    float resultado = mitad + quintaParte;

    // Mostrar el resultado
    printf("La mitad de %.2f m�s su quinta parte es %.2f\n", numero, resultado);

    return 0;
}

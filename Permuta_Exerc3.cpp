#include <stdio.h>
#include <conio.h>

int main() {
	float gasolina_preco,valor_pago, litros;
	
	
	puts("entre com o valor do preco da gasolina");
	scanf("%f",&gasolina_preco);
	puts("quantos voce ira pagar");
	scanf("%i",valor_pago);
	
	litros = (gasolina_preco/valor_pago);
	printf("%i",litros);
	
	
}

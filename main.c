#include <stdio.h>

double mod(double a, double b)
{
	double resultado = a - b;
	
	if(resultado < 0)
	{
		resultado *= -1;
	}
		
	return resultado;
}

double raizq(double n)
{
        double precisao = 0.01;
        double valor1 = 1.0;
        double valor2 = 0;
        do
        {
            valor2 = valor1;
            valor1 = (valor1 + (n/valor1))/2;
            
        } while (mod(valor1, valor2) > precisao);
        return valor1;
}

int main()
{
	double n;
	scanf("%lf", &n);

	printf("%.2f\n", raizq(n));
}
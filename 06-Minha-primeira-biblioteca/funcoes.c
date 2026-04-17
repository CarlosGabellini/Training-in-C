//Aqui esta localizado minhas funcoes em C;

float potencia (float base, float expoente) {

    float resultado = 1;

    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

float raiz_quadrada (float numero_colocado) {

    float resultado = numero_colocado;
    
    for (int i = 0; i < 20; i++) {
        resultado = (1.0/2.0) * (resultado + (numero_colocado / resultado));
    }

    return resultado;
}

int contar_digitos (int digitos) {

    int contar = 0;
    int digito1 = digitos;

    while (digito1 != 0) {

        digito1 = digito1 / 10;
        contar++;
    }

    return contar;
}

unsigned int fatoracao (int numero) {

    if (numero == 1) {
        return 1;
    }

    return numero * fatoracao(numero - 1);
}
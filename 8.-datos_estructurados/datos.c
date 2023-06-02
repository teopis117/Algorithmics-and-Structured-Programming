#include <stdio.h>

struct fecha {
    int dia;
    int mes;
    int ano;
};

int fechaEsValida(struct fecha f) {
    // Comprobamos el dia
    if(f.dia < 1 || f.dia > 31) {
        return 0;
    }
    
    // Comprobamos el mes
    if(f.mes < 1 || f.mes > 12) {
        return 0;
    }
    
    // Comprobamos el año
    if(f.ano < 0) {
        return 0;
    }
    
    // Comprobamos los dias de cada mes
    if(f.mes == 2) {
        if((f.ano % 4 == 0 && f.ano % 100 != 0) || f.ano % 400 == 0) {
            if(f.dia > 29) {
                return 0;
            }
        } else if(f.dia > 28) {
            return 0;
        }
    } else if(f.mes == 4 || f.mes == 6 || f.mes == 9 || f.mes == 11) {
        if(f.dia > 30) {
            return 0;
        }
    }
    
    // La fecha es valida
    return 1;
}

int main() {
    struct fecha f = {29, 2, 2020};
    if(fechaEsValida(f)) {
        printf("La fecha es valida.\n");
    } else {
        printf("La fecha no es valida.\n");
    }
    
    return 0;
}

#include <stdlib.h>
#include <stdio.h>


// ./configure check all libs on system
// make build the whole project
// make install install the binary into /usr/local/share
// using DESTDIR change the /usr/local to defined value


int main() {

    int num = 10;

    int &ref = num;

    printf("%d \n", ref);
    printf("%d \n", num);

    printf("%p \n", &num);
    printf("%p", &ref);

    return 0;
}

// passando o valor por referencia minimizo a quantidade de bytes gerada na memoria
// já que a menor unidade em memória é o byte
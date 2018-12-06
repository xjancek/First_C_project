#include <stdio.h>

struct zaznam {
    char kategoria[51];
    char znacka[51];
    char predajca[101];
    char cena[10];
    char rok_vyroby[10];
    char stav_vozidla[201];
    struct zaznam *next;
};

//---------------------------------------------------------------------

void n(struct zaznam **zaznam_zac, struct zaznam **zaznam_act, int *poc_zaznamov){

    FILE *f;
    char pole[201];
    int poc_zaznam=0;

    if ((f = fopen("auta.txt", "r")) == NULL) {           //otvorí súbor a skontroluje či sa správne otovoril
        printf("something is wrong\n");
        return;
    }

    while ((fgets(pole, sizeof(pole), f)) != NULL) {            //spočíta počet záznamov v súbore

        if (pole[0] == '$'){
            poc_zaznam++;}
    }
    *poc_zaznamov = poc_zaznam;

}
//---------------------------------------------------------------------

int main() {

    char c=0;
    int *poc_zaznamov=0;

    struct zaznam *zaznam_zac, *zaznam_act;

    while (1){
        scanf("%c", &c);

        switch (c){

        }
    }

}
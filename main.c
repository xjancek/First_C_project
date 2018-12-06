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
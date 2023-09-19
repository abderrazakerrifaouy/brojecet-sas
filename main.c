#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct product {
    char x[100];
    char y[100];
    int z;
    int w;
    int number;
};
void oredre(struct product warehouse[], int nmp);
void scan(struct product warehouse[], int nmb);
void liset(struct product warehouse[], int nmb, int Z);
void rocherch(struct product warehouse[], int nmp);

void scan(struct product warehouse[], int nmb) {
    for (int i = 0; i < nmb; i++) {
        printf("********************\n");
        warehouse[i].number = i;
        printf("enter the name of brodio %d: ", i + 1);
        scanf("%s", warehouse[i].x);
        printf("enter the code for %s: ", warehouse[i].x);
        scanf("%s", warehouse[i].y);
        printf("enter the quantity for %s: ", warehouse[i].x);
        scanf("%d", &warehouse[i].z);
        printf("enter the price for %s: ", warehouse[i].x);
        scanf("%d", &warehouse[i].w);
        printf("\n\n\n**************************\n");
    }
}

void liset(struct product warehouse[], int nmb, int Z) {
    int M, N;
    for (int i = 0; i < nmb; i++) {
        printf("product %d {\n", warehouse[i].number + 1);
        printf("the name of brodio: %s\n", warehouse[i].x);
        printf("the code: %s %s\n", warehouse[i].x, warehouse[i].y);
        printf("the quantity %s: %d\n", warehouse[i].x, warehouse[i].z);
        printf("the price %s = %d\n", warehouse[i].x, warehouse[i].w);
        printf("}\n");
    }
    printf("\n\n\n************************\n");
 }


void rocherch(struct product warehouse[], int nmp) {
    char s[100], code[100];
    printf(" ");
    printf("Enter a name: ");
    scanf("%s", s);
    printf("Enter a code: ");
    scanf("%s", code);
    for (int i = 0; i < nmp; i++) {
        if (strcmp(warehouse[i].x,s)==0 || strcmp(warehouse[i].y,code)==0 ) {
            printf("The quantity for %s: %d\n", warehouse[i].x, warehouse[i].z);
            printf("The price for %s = %d\n", warehouse[i].x, warehouse[i].w);
        }
    }
}
void oredre(struct product warehouse[], int nmp) {
    struct product xenge[100];
    int x ;
    printf("Sorting alphabetically press 1 ; \n Sorting by price 2;  ");
    scanf("%d",&x);
    if(x==1){
    for (int i = 0; i < nmp; i++) {
        for (int z = 0; z < nmp - 1; z++) {
            if (warehouse[z].w > warehouse[z + 1].w) {
                xenge[z] = warehouse[z];
                warehouse[z] = warehouse[z + 1];
                warehouse[z + 1] = xenge[z];
            }
        }
    }

    int z = 1;
    liset(warehouse, nmp, z);
    }
    if(x==2){
        for (int i = 0; i < nmp; i++) {
        for (int z = 0; z < nmp - 1; z++) {
            if (strcmp(warehouse[z].x,warehouse[z+1].x)>0) {
                xenge[z] = warehouse[z];
                warehouse[z] = warehouse[z + 1];
                warehouse[z + 1] = xenge[z];

        }
    }


    }
     int z = 1;
    liset(warehouse, nmp, z);
}
}

int main() {
    int nmb, q, riche, N, M, z = 0;
    struct product warehouse[100];
    printf("If you want to enter one product, press 1;\nIf you want to enter more than one product, press 2;\nWhat is your choice? ");
    scanf("%d", &q);

    if (q == 2) {
        printf("Enter the number of products: ");
        scanf("%d", &nmb);
        scan(warehouse, nmb);
        liset(warehouse, nmb, z);
          printf("\nIf you want to search for a product, press 1;\nIf you want to sort the products, press 2;\nWhat is your choice? ");
        scanf("%d", &M);
        if (M == 1) {
            rocherch(warehouse, nmb);
        } else if (M == 2) {
            oredre(warehouse, nmb);
        }
    } else if (q == 1) {
        nmb = 1;
        scan(warehouse, nmb);
        liset(warehouse, nmb, z);
    } else {
        printf("Error\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct brodoui{
    char x[100] ;
    char y[100] ;
    int z ;
    int w ;
    int number ;

}errifaouy;


void scan(struct brodoui abdo[], int nmb){

      for(int i=0 ; i<nmb ; i++){
        printf("********************\n");
    abdo[i].number = i ;
    printf("enter the nume the brodio %d ; ",i+1 );
    scanf("%s",abdo[i].x);
    printf(" enter the code the %s ; ",abdo[i].x);
    scanf("%s",abdo[i].y);
    printf(" entere the cntite %s ; ",abdo[i].x);
    scanf("%d",&abdo[i].z);
    printf(" inter the prix %s ;  ",abdo[i].x);
    scanf("%d",&abdo[i].w);
    printf("\n\n\n**************************");
     }

}

void liset(struct brodoui abdo[], int nmb){
    int M , N ;
    for( int i  = 0 ; i < nmb ; i++){
    printf(" prodio %d {",abdo[i].number + 1 );
    printf(" \n %d the nume the brodio %s ; ", abdo[i].number +1 ,abdo[i].x);
    printf(" \n the code the %s %s ; \n",abdo[i].x ,abdo[i].y);
    printf(" the cntite %s %d ; \n ",abdo[i].x ,abdo[i].z);
    printf("  the prix %s = %d ; \n",abdo[i].x ,abdo[i].w);
    printf("}");
    }
    printf("\n\n\n************************");
    printf(" \n if you want to search for a product , press 1 ; \n if you want sort the products , press 2 ; \n what is your choice ? ");
    scanf("%d",&M);
    if(M==1){
        rocherch(abdo , nmb);
    }else if ( M==2){
        oredre(abdo , nmb );
        }

}
void rocherch(struct brodoui abdo[] , int nmp ){
    char s[100] , code[100];
    printf(" da5ele semayiya ; ");
    scanf("%s",s);
    printf(" da5elel code ");
    scanf("%s",code);
    for( int i = 0 ; i<nmp ; i++ ){
        if(strlen(abdo[i].x)==strlen(s)|| strlen(abdo[i].y)==strlen(code)){
    printf("  \n the nume the brodio %s",abdo[i].x);
    printf(" \n the cntite %s ; %d  \n ",abdo[i].x ,abdo[i].z);
    printf("  \n the prix %s = %d \n",abdo[i].x ,abdo[i].w);
        }
    }
}
int oredre(struct brodoui abdo[100] , int nmp ){
    int P = 0 ;
   for (int i = 0; i < nmp; i++)
   { for (int P = 0; P < nmp; P++)
   {
    int A = abdo[P].w;
    int B = abdo[P+1].w ;
    int chz , chw ;
    char chx[100] , chy[100];
    if ( A < B )
    {
        //tabedile semiya 
        chx[100] = abdo[P].x ;
       abdo[P].x == abdo[P+1].x ;
       abdo[P+1].x == chx ; 
       //neha hebaseeete KEMALE DAKECHILI BEDITEY O5EDAME LE CHALENGE 
       
        
     } 
    }
   }
}

int main()
{
    int nmb , q ,riche , N , M ;
    struct brodoui abdo[100];
    printf(" if you want one product , press 1 ;\n if want to enter more than one  product , press 2 ;\n what is your choice ? ");
    scanf("%d",&q);
    // determine the method of work 
    if(q==2){
    // enter the number of products
    printf("entere the numeber the brodio ; ");
    scanf("%d",&nmb);
    //call the input function 
    scan(abdo,nmb);
    // call the print function
     liset(abdo,nmb);
    }else if(q==1){
        //if youwant to enter one prosuct 
        nmb = 1 ;
        scan(abdo,nmb);
        liset(abdo,nmb);
    }else{
        //if you enter a number ether then 1 and 2;
        printf(" errore ");
    }

 }

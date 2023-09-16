#include <stdio.h>
#include <string.h>
 brodoui{
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

void liset(struct brodoui abdo[], int nmb , int Z  ){
    int M , N ;
    for( int i  = 0 ; i < nmb ; i++  ){
    printf(" prodio %d {",abdo[i].number + 1 );
    printf(" \n %d the nume the brodio %s ; ", abdo[i].number +1 ,abdo[i].x);
    printf(" \n the code the %s %s ; \n",abdo[i].x ,abdo[i].y);
    printf(" the cntite %s %d ; \n ",abdo[i].x ,abdo[i].z);
    printf("  the prix %s = %d ; \n",abdo[i].x ,abdo[i].w);
    printf("}\n");
    }
    printf("\n\n\n************************");
    if (Z==0)
    {
        oredre(abdo,nmb);
    }
    
     
}
void rocherch(struct brodoui abdo[] , int nmp ){
    char s[100] , code[100];
    printf(" da5ele semayiya ; ");
    scanf("%s",s);
    printf(" da5elel code ");
    scanf("%s",code);
    for( int i = 0 ; i<nmp ; i++ ){
        if(strlen(abdo[i].x)==strlen(s) && strlen(abdo[i].y)==strlen(code)){
    printf(" \n the cntite %s ; %d  \n ",abdo[i].x ,abdo[i].z);
    printf("  \n the prix %s = %d \n",abdo[i].x ,abdo[i].w);
        }
    }
}
void oredre(struct brodoui abdo[] , int nmp ){
    int P = 0 , z = 0 ;
    struct brodoui xenge[100];
    
     for (int i = 0; i < nmp; i++)
     {
       for (int z = 0; z < nmp; i++)
       {
        if (abdo[z].w>abdo[z+1].w)
        {
           xenge[z]=abdo[z];
           abdo[z]=abdo[z+1];
           abdo[z+1]=abdo[z];

        }
        
       }
       
     }
     
   z = 1 ;
   liset(abdo,nmp,z);
}

int main()
{
    int nmb , q ,riche , N , M , z=0 ;
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
     liset(abdo,nmb, z );
    }else if(q==1){
        //if youwant to enter one prosuct 
        nmb = 1 ;
        scan(abdo,nmb);
        liset(abdo,nmb,z );
    }else{
        //if you enter a number ether then 1 and 2;
        printf(" errore ");
    }

 }

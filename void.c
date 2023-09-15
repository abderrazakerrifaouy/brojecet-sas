#include <stdio.h>
int maine( int x , int myerey2[x-1]){
    int z , y ;
    printf(" da5ele le3adade li bari temhihe ");
    scanf("%d",&y); 
       for (int  i = 0; i < x ; i++)
       {
        if (y==myerey2[i])
        { 
            z = myerey2[i];
            myerey2[i]== myerey2[i+1];
            myerey2[i+1]== z ;
            
        }
        
       }
        for (int i = 0; i < x; i++)
    {
        printf(" the valie %d =  %d \n", i + 1 ,maine(x , myerey2[x])  );
    }
    
return myerey2[x-1];
    

}
int main(){
    int x  ;
    printf("inte nember the vareyabel ");
    scanf("%d",&x);
    int myerey[x];
    for (int i = 0; i < x; i++)
    {
        printf("inter the valie %d ",i +1);
        scanf("%d",&myerey[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf(" the valie %d =  %d \n", i + 1 ,myerey[i]  );
    }
       maine(x , myerey[x]);
    
}

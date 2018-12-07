#include<stdio.h>
#include<stdlib.h>
main(){
int x;
printf("masukan bilangan : ");
scanf("%d" ,&x);
if(x>=0){
    printf("%d adalah bilangan positif\n\n",x);
}else{
     printf("%d adalah bilangan negatif \n\n",x);
}
     system("PAUSE");
     return 0;
}

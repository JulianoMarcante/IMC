#include <stdio.h>
#include <stdlib.h>
int main(){   
float peso , altura, imc;
printf("\nInforme seu peso em Kg:");
scanf ("%f",&peso);
printf("\nInforme sua altura em m:");
scanf ("%f",&altura);
imc = peso / (altura*altura);   
if (imc <19 ){
        printf("\n\t\t\t MUITO MAGRO");   
}else{       
if(imc >= 19 && imc<25){
            printf("\n\t\t  NORMAL");       
}else{       
if(imc >= 25 && imc<30){
            printf("\n\t\t  SOBRE PESO");       
}else{       
if(imc >= 30 && imc<=40){
            printf("\n\t\t  NORMAL");       
}else{       
if (imc>40){
            printf("\n\t\t  OBESIDADE GRAVE");
 } } } } }
    printf("\n\t\tSeu IMC é: %.2f",imc);
/* Em caso de windows e o programa não permanecer aberto
 descomente a próxima linha*/
// system ("pause") ;
return 0;
}


#include <stdio.h>

int main(void) {
 int  overweight=0, normalweight=0, underweight=0, i=1;
  float height, weight, imc, age, overages=0, normalages=0, underages=0;
  
  while(i == 1){
    printf("\nEnter your height: ");
    scanf("%f", &height);
    printf("\nEnter your weight: ");
    scanf("%f", &weight);
    printf("\nEnter your age: ");
    scanf("%f", &age);

    //BMI calculation || BR: IMC
    height = height * height;
    imc = weight/height;
    
    //Assessments || Avaliações
    if(imc < 20){
      underages += age;
      underweight++;
    }
    if(imc >= 20 && imc <= 25){
      normalages += age;
      normalweight++;
    }
    if(imc > 25){
      overweight++;
      overages += age;
    } 
    
    printf("\nAre there more participants? 1 = YES 0 = NO: ");
    scanf("%d", &i);
    }

    //Averages || Medias
    if(underages > 1){
      underages /= underweight;
      }
    if(normalages > 1){
      normalages /= normalweight;
      }
    if(overages > 1){
      overages /= overweight;
      }

  printf("\nUnderweight participants: %d, average age: %.2f", underweight, underages);
  printf("\nNormal weight participants: %d, average age: %.2f", normalweight, normalages);
  printf("\nOverweight or obese participants %d, mean age: %.2f", overweight,overages);
 
return 0;
}

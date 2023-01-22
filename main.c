#include <stdio.h>
#include <math.h>

double seira1(int input);
double meros(int input);

int main(void){
    int input;
    printf("Give an integer value :");
    scanf("%d",&input);
    double sum1 = seira1(input);
    double sum2 = meros(input);
    if(sum1 == sum2) printf("Valid!");
    else printf("Invalid!");

    return 0;
}

double seira1(int input){
    double sum;
    for(int i = 1;i <= input;i++){
        sum = sum + pow(i,2);
    }
    printf("seira 1 : %lf\n",sum);
    return sum;
}

double meros(int input){
    double sum;
    sum = (double)((input*(input+1)*(2 * input + 1))/6);
    printf("meros : %lf\n",sum);
    return sum;
}